/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

#include "../includes/my.h"

int my_find_prime_sup(int nb)
{
    while (nb < 2147483647) {
        if (my_is_prime(nb) == 1) {
            return (nb);
        }
        nb++;
    }
    return (0);
}
