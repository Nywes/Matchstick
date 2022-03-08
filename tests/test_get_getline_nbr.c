/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_get_getline_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(get_getline_nbr, test_one_number)
{
    char *str = "1\n";
    int i = 0;

    i = get_getline_nbr(str);
    cr_assert_eq(i, 1);
}

Test(get_getline_nbr, test_basic)
{
    char *str = "123";
    int i = 0;

    i = get_getline_nbr(str);
    cr_assert_eq(i, 123);
}

Test(get_getline_nbr, long_test)
{
    char *str = "123456789";
    int i = 0;

    i = get_getline_nbr(str);
    cr_assert_eq(i, 123456789);
}

Test(get_getline_nbr, invalid_test)
{
    char *str = "HELLO";
    int i = 0;

    i = get_getline_nbr(str);
    cr_assert_eq(i, -1);
}

Test(get_getline_nbr, most_complex_test)
{
    char *str = "123HELLO123";
    int i = 0;

    i = get_getline_nbr(str);
    cr_assert_eq(i, -1);
}