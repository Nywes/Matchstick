/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** get_getline_nbr
*/

#include "my.h"
#include "matchstick.h"

int get_getline_nbr(char *str)
{
    int i = 0;

    for (int a = 0; str[a] != '\0' && str[a] != '\n'; a++) {
        if (str[a] < '0' || str[a] > '9') {
            return (-1);
        }
        if (str[a] >= '0' && str[a] <= '9') {
            i = i * 10;
            i += str[a] - 48;
        }
    }
    return (i);
}