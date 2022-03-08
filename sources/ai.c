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

int check_if_intresting(int *map, int ag1)
{
    int i = 0;

    for (int j = 0; j < ag1; j++) {
        if (map[j] != 0) {
            i++;
        }
    }
    if (i > 2)
        return (0);
    return (1);
}

int manage_cases(int *map, int x, int y, int ag2)
{
    if (manage_first_case(map, x, y, ag2) == 1)
        return (0);
    if (manage_second_case(map, x, y, ag2) == 1)
        return (0);
    if (manage_third_case(map, x, y, ag2) == 1)
        return (0);
    if (manage_fourth_case(map, x, y, ag2) == 1)
        return (0);
    if (manage_fifth_case(map, x, y, ag2) == 1)
        return (0);
    return (0);
}

int withdraws_if_interesting(int *map, int ag1, int ag2)
{
    int x = -1;
    int y = 0;

    for (int i = 0; i < ag1; i++) {
        if (map[i] != 0 && x == -1)
            x = i;
        if (map[i] != 0 && x != -1 && y == 0 && x != i)
            y = i;
    }
    if (x == ag1 - 1 || x == y)
        y = 0;
    manage_cases(map, x, y, ag2);
    return (0);
}

int withdraws_if_not_yet_interesting(int *map, int ag1, int ag2)
{
    int less_boring_line = 200;
    int line = 0;
    int x = 0;

    for (int i = 0; i < ag1; i++) {
        if (map[i] > 0 && map[i] < less_boring_line) {
            less_boring_line = map[i];
            line = i;
        }
    }
    x = remove_max_or_enough(&map[line], ag2);
    line++;
    my_printf("AI removed %i match(es) from line %i\n", x, line);
    return (0);
}

int remove_max_or_enough(int *line_nbr, int ag2)
{
    int x = 0;

    if (*line_nbr >= ag2) {
        *line_nbr -= ag2;
        return (ag2);
    } else {
        while (*line_nbr != 0) {
            *line_nbr = *line_nbr - 1;
            x++;
        }
        return (x);
    }
    return (0);
}