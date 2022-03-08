/*
** EPITECH PROJECT, 2019
** strdup
** File description:
** strdup
*/

#include <stdlib.h>

char *my_strdup(char const *str)
{
    int a = 0;
    char *dest;

    dest = malloc(sizeof(char) * (a + 1));
    while (str[a] != '\0') {
        dest[a] = str[a];
        a++;
    }
    return (dest);
}
