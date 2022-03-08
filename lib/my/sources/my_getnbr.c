/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** my_getnbr
*/

#include "../includes/my.h"

static int check_if_negative_nbr(char const *str, int a, int i)
{
    if (i >= 0)
        return (str[a] - 48);
    if (i < 0)
        return (-(str[a] - 48));
    return (0);
}

int my_getnbr(char const *str)
{
    int i = 0;

    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] >= '0' && str[a] <= '9') {
            i = i * 10;
            i += check_if_negative_nbr(str, a, i);
        }
        if (a > 0 && str[a - 1] == '-' && (str[a] >= '0' && str[a] <= '9'))
            i = i * -1;
        if (i != 0 && (str[a] < '0' || str[a] > '9'))
            return (i);
    }
    return (i);
}
