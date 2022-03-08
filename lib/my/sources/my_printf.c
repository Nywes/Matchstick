/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include "../includes/my.h"

static void stock_other_variables(int i, va_list list, const char *s)
{
    if (s[i] == 'h' && s[i + 1] == 'd') {
        my_put_nbr(va_arg(list, int));
        i++;
    }
    if (s[i] == 'b')
        my_putnbr_base(va_arg(list, int), "01");
    if (s[i] == 'o')
        my_putnbr_base(va_arg(list, int), "01234567");
    if (s[i] == 'p') {
        my_putstr("0x");
        my_putnbr_base(va_arg(list, unsigned long int), "0123456789abcdef");
    }
    if (s[i] == 'S')
        my_showstr(va_arg(list, char*));
    if (s[i] == 'x')
        my_putnbr_base(va_arg(list, int), "0123456789abcdef");
    if (s[i] == 'X')
        my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
    if (s[i] == 'u')
        my_put_uns_nbr(va_arg(list, unsigned int));
}

static int check_modulo_letter(int i, va_list list, const char *s)
{
    if (s[i] == '%')
        my_putchar('%');
    if (s[i] == 'i' || s[i] == 'd')
        my_put_nbr(va_arg(list, int));
    if (s[i] == 'c')
        my_putchar((char)va_arg(list, int));
    if (s[i] == 'l' && s[i + 1] == 'd') {
        my_put_long_nbr(va_arg(list, long));
        i++;
    }
    if ((s[i] == 'l') && (s[i + 1] == 'i')) {
        my_put_long_nbr(va_arg(list, long));
        i++;
    }
    if (s[i] == 's')
        my_putstr(va_arg(list, char*));
    stock_other_variables(i, list, s);
    return (i);
}

int my_printf(const char *s, ...)
{
    va_list list;

    va_start(list, s);
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] == '%') {
            i = check_modulo_letter(i + 1, list, s);
        }
        else {
            my_putchar(s[i]);
        }
    }
    va_end(list);
    return (0);
}
