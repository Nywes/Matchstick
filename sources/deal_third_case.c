/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** deal_third_case
*/

#include "my.h"
#include "matchstick.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool check_if_long(int line, int ag2)
{
    bool condition = false;

    if (line > ag2)
        condition = true;
    return (condition);
}

bool check_if_multiple(int line, int ag2)
{
    bool condition = false;

    for (int i = ag2 + 2; i < 200; i += (ag2 + 1)) {
        if (line == i)
            condition = true;
    }
    return (condition);
}

int withdraws_max(int *map_line, int line)
{
    int x = *map_line;

    *map_line -= *map_line;
    my_printf("AI removed %i match(es) from line %i\n", x, line + 1);
    return (x);
}

int withdraws_to_prepare_win(int *l_one, int l_two, int line, int ag2)
{
    int count = 0;

    if (*l_one - ag2 > l_two) {
        *l_one -= 1;
        my_printf("AI removed %i match(es) from line %i\n", 1, line + 1);
    } else {
        while (*l_one > l_two) {
            *l_one -= 1;
            count++;
        }
        my_printf("AI removed %i match(es) from line %i\n", count, line + 1);
    }
    return (0);
}

int deal_third_case(int *map, int x, int y, int ag2)
{
    bool long_x = check_if_long(map[x], ag2);
    bool long_y = check_if_long(map[y], ag2);
    bool mult = false;

    if (long_x == true)
        mult = check_if_multiple(map[x], ag2);
    else
        mult = check_if_multiple(map[y], ag2);
    if (mult == true && long_x == true)
        return (withdraws_max(&map[y], y));
    if (mult == true && long_y == true)
        return (withdraws_max(&map[x], x));
    if (mult == false && long_x == true)
        return (withdraws_to_prepare_win(&map[x], map[y], x, ag2));
    if (mult == false && long_y == true)
        return (withdraws_to_prepare_win(&map[y], map[x], y, ag2));
    return (0);
}