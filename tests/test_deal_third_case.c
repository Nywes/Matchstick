/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_deal_third_case
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(deal_third_case, test_one)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 5;
    map[1] = 2;
    int x = 0;
    int y = 1;
    int ag2 = 3;

    deal_third_case(map, x, y, ag2);
    cr_assert_eq(map[1], 0);
    free(map);
}

Test(deal_third_case, test_two)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 6;
    map[1] = 1;
    int x = 0;
    int y = 1;
    int ag2 = 3;

    deal_third_case(map, x, y, ag2);
    cr_assert_eq(map[0], 5);
    free(map);
}

Test(deal_third_case, test_three)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 4;
    map[1] = 3;
    int x = 0;
    int y = 1;
    int ag2 = 3;

    deal_third_case(map, x, y, ag2);
    cr_assert_eq(map[0], 3);
    free(map);
}