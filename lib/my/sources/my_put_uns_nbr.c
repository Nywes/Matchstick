/*
** EPITECH PROJECT, 2019
** put_uns_nbr
** File description:
** put_uns_nbr
*/

#include "../includes/my.h"

int my_put_uns_nbr(unsigned int a)
{
    long e = a;

    if (e > 9) {
        my_put_uns_nbr(e / 10);
        my_put_uns_nbr(e % 10);
    }
    else {
        my_putchar(e + '0');
    }
    return (0);
}