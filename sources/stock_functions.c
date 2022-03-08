/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** ?
*/

#include "my.h"
#include "matchstick.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ai_think(int *map, int ag1, int ag2)
{
    if (check_if_intresting(map, ag1)) {
        withdraws_if_interesting(map, ag1, ag2);
    } else {
        withdraws_if_not_yet_interesting(map, ag1, ag2);
    }
    return (0);
}

int win_lose_condition(int *map, int y)
{
    for (int i = 0; i < y; i++) {
        if (map[i] != 0)
            return (1);
    }
    return (0);
}