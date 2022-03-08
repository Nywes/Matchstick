/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_deal_fifth_case
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(deal_fifth_case, test_one)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 7;
    map[1] = 6;
    int x = 0;
    int y = 1;
    int ag2 = 3;

    deal_fifth_case(map, x, y, ag2);
    cr_assert_eq(map[0], 6);
    free(map);
}

Test(deal_fifth_case, test_two)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 7;
    map[1] = 10;
    int x = 0;
    int y = 1;
    int ag2 = 3;

    deal_fifth_case(map, x, y, ag2);
    cr_assert_eq(map[1], 9);
    free(map);
}

Test(deal_fifth_case, test_three)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 7;
    map[1] = 12;
    int x = 0;
    int y = 1;
    int ag2 = 3;

    deal_fifth_case(map, x, y, ag2);
    cr_assert_eq(map[1], 9);
    free(map);
}