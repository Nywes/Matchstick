/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_deal_second_case
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(deal_second_case, test_one)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 4;
    map[1] = 4;
    int x = 0;
    int ag2 = 3;

    deal_second_case(map, x, ag2);
    cr_assert_eq(map[0], 1);
    free(map);
}

Test(deal_second_case, test_two)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 5;
    map[1] = 5;
    int x = 0;
    int ag2 = 3;

    deal_second_case(map, x, ag2);
    cr_assert_eq(map[0], 4);
    free(map);
}

Test(deal_second_case, test_three)
{
    int *map = malloc(sizeof(int) * 2);
    map[0] = 6;
    map[1] = 6;
    int x = 0;
    int ag2 = 3;

    deal_second_case(map, x, ag2);
    cr_assert_eq(map[0], 5);
    free(map);
}