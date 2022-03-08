/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_win_condition
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(win_lose_condition, test_one)
{
    int map[3] = {0, 0, 1};
    int y = 3;

    cr_assert_eq(win_lose_condition(map, y), 1);
}

Test(win_lose_condition, test_two)
{
    int map[9] = {0, 0, 0, 0, 0, 0, 0, 0, 99};
    int y = 9;

    cr_assert_eq(win_lose_condition(map, y), 1);
}

Test(win_lose_condition, test_three)
{
    int map[3] = {0, 0, 0};
    int y = 3;

    cr_assert_eq(win_lose_condition(map, y), 0);
}