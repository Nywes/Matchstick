/*
** EPITECH PROJECT, 2019
** showstr
** File description:
** showstr
*/

#include "../includes/my.h"

static void print_zeros(char const *str, int i)
{
    if (str[i] == '0')
        my_putchar('0');
    if (str[i] < 8) {
        my_putchar('0');
    }
    my_putchar('0');
}

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        if ((str[i] >= 0 && str[i] < 32) || str[i] == 127) {
            my_putchar('\\');
            print_zeros(str, i);
            my_putnbr_base(str[i], "01234567");
        }
        else {
            my_putchar(str[i]);
        }
        i++;
    }
    return (0);
}
