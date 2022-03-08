/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** deal_second_case
*/

#include "my.h"
#include "matchstick.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void withdraw_to_leave_max(int *map_line, int ag2, int line)
{
    int x = *map_line;
    int i = ag2 + 1;

    while (i < x) {
        i += ag2;
    }
    i -= ag2;
    i = *map_line - i;
    *map_line = *map_line - i;
    my_printf("AI removed %i match(es) from line %i\n", i, line + 1);
}

int deal_second_case(int *map, int x, int ag2)
{
    bool condi = false;

    for (int i = ag2 + 2; i < 200; i += (ag2 + 1)) {
        if (map[x] == i)
            condi = true;
    }
    if (condi == true) {
        withdraw_to_leave_max(&map[x], ag2, x);
    } else if (map[x] == ag2 + 1) {
        map[x] -= ag2;
        my_printf("AI removed %i match(es) from line %i\n", ag2, x + 1);
    } else {
        map[x] -= 1;
        my_printf("AI removed %i match(es) from line %i\n", 1, x + 1);
    }
    return (0);
}