/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_deal_fourth_case
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(deal_fourth_case, test_one)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 1;
    map[1] = 2;
    int x = 0;
    int y = 1;

    deal_fourth_case(map, x, y);
    cr_assert_eq(map[1], 0);
    free(map);
}

Test(deal_fourth_case, test_two)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 3;
    map[1] = 2;
    int x = 0;
    int y = 1;

    deal_fourth_case(map, x, y);
    cr_assert_eq(map[0], 2);
    free(map);
}

Test(deal_fourth_case, test_three)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 2;
    map[1] = 2;
    int x = 0;
    int y = 1;

    deal_fourth_case(map, x, y);
    cr_assert_eq(map[0], 1);
    free(map);
}

Test(deal_fourth_case, test_four)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 4;
    map[1] = 2;
    int x = 0;
    int y = 1;

    deal_fourth_case(map, x, y);
    cr_assert_eq(map[0], 2);
    free(map);
}