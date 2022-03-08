/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../includes/my.h"

int my_put_nbr(int a)
{
    long e = a;

    if (e < 0) {
        my_putchar('-');
        e = e * -1;
    }
    if (e > 9) {
        my_put_nbr(e / 10);
        my_put_nbr(e % 10);
    }
    else {
        my_putchar(e + '0');
    }
    return (0);
}
