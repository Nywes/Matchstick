/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr
*/

#include "../includes/my.h"

char *my_revstr(char *str)
{
    char copy_str[my_strlen(str) + 1];
    char *result = copy_str;
    int b = 0;
    int c = (my_strlen(str) - 1);

    while (b < my_strlen(str)) {
        copy_str[b] = str[c];
        b++;
        c--;
    }
    copy_str[b] = '\0';
    return (result);
}