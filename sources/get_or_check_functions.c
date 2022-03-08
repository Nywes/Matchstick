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
#include <stdbool.h>

int get_nbr_of_matches(int *nb_matches, int ag2, int map_line, bool *b)
{
    char *stock = NULL;
    size_t n = 0;

    my_printf("Matches: ");
    if (getline(&stock, &n, stdin) == -1)
        return (84);
    *nb_matches = get_getline_nbr(stock);
    if (check_getline_return(*nb_matches, ag2, map_line) == 1)
        return (0);
    *b = true;
    return (0);
}

int get_nbr_of_lines(int *line, int ag1)
{
    char *stock = NULL;
    size_t n = 0;
    bool b = false;

    while (b != true) {
        my_printf("Line: ");
        if (getline(&stock, &n, stdin) == -1)
            return (84);
        *line = get_getline_nbr(stock);
        if (*line == -1)
            my_printf("Error: invalid input (positive number expected)\n");
        else if (*line > ag1 || *line < 1 || *line == 0) {
            my_printf("Error: this line is out of range\n");
        } else {
            b = true;
        }
    }
    return (0);
}

int check_values(char **ag)
{
    int ag1 = my_getnbr(ag[1]);
    int ag2 = my_getnbr(ag[2]);

    if (ag1 > 1 && ag1 < 100) {
        if (ag2 > 0)
            return (0);
        my_printf("Invalid size of matches to take\n");
        return (1);
    }
    my_printf("Invalid size of map\n");
    return (1);
}

int check_getline_return(int nb_matches, int ag2, int map_line)
{
    if (nb_matches == -1) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (1);
    }
    if (nb_matches > ag2) {
        my_printf("Error: you cannot remove more \
than %i matches per turn\n", ag2);
        return (1);
    }
    if (nb_matches > map_line) {
        my_printf("Error: not enough matches on line\n");
        return (1);
    }
    if (nb_matches == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (1);
    }
    return (0);
}