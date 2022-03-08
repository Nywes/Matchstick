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

void withdraw_for_equal(int *l_one, int l_two, int ag2, int line)
{
    int x = *l_one;
    int y = l_two;
    int count = 0;

    if (x - ag2 > y) {
        *l_one -= ag2;
        my_printf("AI removed %i match(es) from line %i\n", ag2, line + 1);
    } else {
        while (x != y && check_if_multiple(*l_one, ag2) == false) {
            *l_one -= 1;
            count++;
            x--;
        }
        if (count == 0) {
            *l_one -= 1;
            count++;
        }
        my_printf("AI removed %i match(es) from line %i\n", count, line + 1);
    }
}

int deal_fifth_case(int *map, int x, int y, int ag2)
{
    if (map[x] > map[y]) {
        withdraw_for_equal(&map[x], map[y], ag2, x);
    } else {
        withdraw_for_equal(&map[y], map[x], ag2, y);
    }
    return (0);
}