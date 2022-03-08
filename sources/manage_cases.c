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

int manage_first_case(int *map, int x, int y, int ag2)
{
    int matches = 0;

    if (y == 0) {
        matches = deal_first_case(&map[x], ag2);
        my_printf("AI removed %i match(es) from line %i\n", matches, x + 1);
        return (1);
    }
    return (0);
}

int manage_second_case(int *map, int x, int y, int ag2)
{
    if (map[x] == map[y] && map[x] > ag2) {
        deal_second_case(map, x, ag2);
        return (1);
    }
    return (0);
}

int manage_third_case(int *map, int x, int y, int ag2)
{
    if ((map[x] > ag2 && map[y] <= ag2) || (map[x] <= ag2 && map[y] > ag2)) {
        deal_third_case(map, x, y, ag2);
        return (1);
    }
    return (0);
}

int manage_fourth_case(int *map, int x, int y, int ag2)
{
    if (map[x] <= ag2 && map[y] <= ag2) {
        deal_fourth_case(map, x, y);
        return (1);
    }
    return (0);
}

int manage_fifth_case(int *map, int x, int y, int ag2)
{
    if (map[x] > ag2 && map[y] > ag2) {
        deal_fifth_case(map, x, y, ag2);
        return (1);
    }
    return (0);
}