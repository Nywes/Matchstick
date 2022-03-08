/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_check_if_lose_nbr_condition
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(check_if_lose_nbr_condition, test_one)
{
    int map_nbr = 4;
    int ag2 = 3;

    cr_assert_eq(check_if_lose_nbr_condition(map_nbr, ag2), 0);
}

Test(check_if_lose_nbr_condition, test_two)
{
    int map_nbr = 5;
    int ag2 = 3;

    cr_assert_eq(check_if_lose_nbr_condition(map_nbr, ag2), 1);
}

Test(check_if_lose_nbr_condition, test_three)
{
    int map_nbr = 13;
    int ag2 = 3;

    cr_assert_eq(check_if_lose_nbr_condition(map_nbr, ag2), 1);
}