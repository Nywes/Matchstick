/*
** EPITECH PROJECT, 2019
** my_put_long_nbr
** File description:
** my_put_long_nbr
*/

#include "../includes/my.h"

long my_put_long_nbr(long ld)
{
    if (ld < 0) {
        my_putchar('-');
        ld = ld * -1;
    }
    if (ld > 9) {
        my_put_long_nbr(ld / 10);
        my_put_long_nbr(ld % 10);
    }
    else {
        my_putchar(ld + '0');
    }
    return (0);
}