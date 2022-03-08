/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_check_values
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(check_values, test_one)
{
    char **ag = my_str_to_word_array("./matchstick abc abc");

    cr_assert_eq(check_values(ag), 1);
}

Test(check_values, test_two)
{
    char **ag = my_str_to_word_array("./matchstick 12 abc");

    cr_assert_eq(check_values(ag), 1);
}

Test(check_values, test_three)
{
    char **ag = my_str_to_word_array("./matchstick abc 12");

    cr_assert_eq(check_values(ag), 1);
}

Test(check_values, test_four)
{
    char **ag = my_str_to_word_array("./matchstick 12 12");

    cr_assert_eq(check_values(ag), 0);
}