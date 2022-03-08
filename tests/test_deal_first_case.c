/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_deal_first_case
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(deal_first_case, test_one)
{
    int map_nbr = 1;
    int ag2 = 3;

    cr_assert_eq(deal_first_case(&map_nbr, ag2), 1);
    cr_assert_eq(map_nbr, 0);
}

Test(deal_first_case, test_two)
{
    int map_nbr = 3;
    int ag2 = 3;

    cr_assert_eq(deal_first_case(&map_nbr, ag2), 2);
    cr_assert_eq(map_nbr, 1);
}

Test(deal_first_case, test_three)
{
    int map_nbr = 4;
    int ag2 = 3;

    cr_assert_eq(deal_first_case(&map_nbr, ag2), 3);
    cr_assert_eq(map_nbr, 1);
}

Test(deal_first_case, test_four)
{
    int map_nbr = 5;
    int ag2 = 3;

    cr_assert_eq(deal_first_case(&map_nbr, ag2), 3);
    cr_assert_eq(map_nbr, 2);
}

Test(deal_first_case, test_five)
{
    int map_nbr = 6;
    int ag2 = 3;

    cr_assert_eq(deal_first_case(&map_nbr, ag2), 1);
    cr_assert_eq(map_nbr, 5);
}

Test(deal_first_case, test_six)
{
    int map_nbr = 9;
    int ag2 = 3;

    cr_assert_eq(deal_first_case(&map_nbr, ag2), 3);
    cr_assert_eq(map_nbr, 6);
}