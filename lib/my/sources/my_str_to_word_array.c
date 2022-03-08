/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdbool.h>
#include <stdlib.h>
#include "../includes/my.h"

int is_separator(char c)
{
    if (c == ' ' || c == '\t' || c == '\0')
        return (1);
    return (0);
}

int find_nbr_words(char *str)
{
    int i = 0;
    int j = 0;
    bool letter = false;

    while (str[j] != '\0') {
        if (is_separator(str[j])) {
            letter = false;
        } else {
            letter = true;
        }
        if (letter == true && is_separator(str[j + 1])) {
            i++;
        }
        j++;
    }
    return (i);
}

int len_word(char *str, int k)
{
    int len = 0;

    while (is_separator(str[k]))
        k++;
    while (!is_separator(str[k])) {
        len++;
        k++;
    }
    return (len);
}

char **assign_to_array(char **result, int words, char *str)
{
    int j = 0;
    int k = 0;

    for (int i = 0; i < words; i++) {
        result[i] = malloc(sizeof(char) * len_word(str, k));
        if (result[i] == NULL)
            return (NULL);
        while (is_separator(str[k]))
            k++;
        while (!is_separator(str[k])) {
            result[i][j] = str[k];
            k++;
            j++;
        }
        j = 0;
    }
    return (result);
}

char **my_str_to_word_array(char *str)
{
    int words = find_nbr_words(str);
    char **result = malloc(sizeof(char *) * (words + 1));

    if (result == NULL)
        return (NULL);
    result[words] = NULL;
    result = assign_to_array(result, words, str);
    if (result == NULL)
        return (NULL);
    return (result);
}