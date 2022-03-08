/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** ai
*/

#include "my.h"
#include "matchstick.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int count_for_it(int *map_line_one, int *map_line_two, int line)
{
    int count = 0;

    while (*map_line_one != *map_line_two) {
        *map_line_one -= 1;
        count++;
    }
    my_printf("AI removed %i match(es) from line %i\n", count, line + 1);
    return (count);
}

int deal_fourth_case(int *map, int x, int y)
{
    if (map[x] == 1)
        return (withdraws_max(&map[y], y));
    if (map[y] == 1)
        return (withdraws_max(&map[x], x));
    if (map[x] == map[y]) {
        map[x] -= 1;
        my_printf("AI removed %i match(es) from line %i\n", 1, x + 1);
        return (0);
    }
    if (map[x] > map[y])
        return (count_for_it(&map[x], &map[y], x));
    if (map[y] > map[x])
        return (count_for_it(&map[y], &map[x], y));
    return (0);
}