/*
** EPITECH PROJECT, 2019
** putnbr_base
** File description:
** putnbr_base
*/

#include "../includes/my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int i = 0;

    while (base[i] != 0) {
        i++;
    }
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
    }
    if (nbr != 0) {
        my_putnbr_base(nbr / i, base);
        my_putchar(base[nbr%i]);
    }
    return (0);
}
