/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int modify_map(int *map, int ag1, int matches_max)
{
    int line = 0;
    int nb_m = 0;
    bool b = false;

    while (b != true) {
        if (get_nbr_of_lines(&line, ag1) == 84)
            return (84);
        line--;
        if (get_nbr_of_matches(&nb_m, matches_max, map[line], &b) == 84)
            return (84);
    }
    my_printf("Player removed %i match(es) from line %i\n", nb_m, line + 1);
    map[line] -= nb_m;
    if (map[line] < 0)
        map[line] = 0;
    return (0);
}

int player_play_his_turn(int *map, int y, int j, char **ag)
{
    my_printf("\nYour turn:\n");
    if (modify_map(map, y, my_getnbr(ag[2])) == 84)
        return (0);
    print_map(map, y, j);
    if (!win_lose_condition(map, y)) {
        my_printf("You lost, too bad...\n");
        free(map);
        return (2);
    }
    return (1);
}

int ai_play_his_turn(int *map, int y, int j, char **ag)
{
    my_printf("\nAI's turn...\n");
    ai_think(map, y, my_getnbr(ag[2]));
    print_map(map, y, j);
    if (!win_lose_condition(map, y)) {
        my_printf("I lost... snif... but I'll get you next time!!\n");
        free(map);
        return (1);
    }
    return (0);
}

int execute_game_turn(int *map, int y, int max, char **ag)
{
    int err = 0;

    err = player_play_his_turn(map, y, max, ag);
    if (err == 2 || err == 84 || err == 0)
        return (err);
    if (ai_play_his_turn(map, y, max, ag) == 1)
        return (1);
    return (3);
}

int execute_matchstick(char **ag)
{
    int y = my_getnbr(ag[1]);
    int *map = NULL;
    int matches_max = 1;
    int err = 0;

    map = malloc(sizeof(int) * y);
    if (map == NULL)
        return (84);
    for (int i = 0; i < y; i++) {
        map[i] = matches_max;
        matches_max += 2;
    }
    matches_max -= 2;
    print_map(map, y, matches_max);
    while (win_lose_condition(map, y)) {
        err = execute_game_turn(map, y, matches_max, ag);
        if (err != 3)
            return (err);
    }
    free(map);
    return (0);
}