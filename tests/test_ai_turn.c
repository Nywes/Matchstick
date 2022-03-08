/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** test_ai_play_his_turn
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "matchstick.h"

Test(ai_play_his_turn, test_one)
{
    int map[2]= {0, 3};
    int y = 2;
    int j = 3;
    char **ag = my_str_to_word_array("./matchstick 2 3");

    ai_play_his_turn(map, y, j, ag);
    cr_assert_eq(map[1], 1);
}

Test(ai_play_his_turn, test_two)
{
    int map[2]= {1, 3};
    int y = 2;
    int j = 3;
    char **ag = my_str_to_word_array("./matchstick 2 3");

    ai_play_his_turn(map, y, j, ag);
    cr_assert_eq(map[1], 0);
}