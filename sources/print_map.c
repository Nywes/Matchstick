/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** print_map
*/

#include "my.h"
#include "matchstick.h"
#include <unistd.h>
#include <stdlib.h>

void print_help(void)
{
    my_printf("USAGE\n\t./matchstick ag1 ag2\n\nDESCRIPTION\n\tag1\t");
    my_printf("map size\n\tag2\tnumber maximum of matches to take\n");
}

void print_line(int sticks_on_line, int sqr_size, int map_line, int y)
{
    int nbr_spaces = y - map_line;
    int count = 1;

    my_putchar('*');
    while (count < nbr_spaces) {
        my_putchar(' ');
        count++;
    }
    for (int j = 0; j < sticks_on_line; j++) {
        my_putchar('|');
        count++;
    }
    while (count < sqr_size + 1) {
        my_putchar(' ');
        count++;
    }
    my_putchar('*');
    my_putchar('\n');
}

void print_map(int *map, int y, int sqr_size)
{
    for (int i = 0; i < sqr_size + 2; i++)
        my_putchar('*');
    my_putchar('\n');
    for (int i = 0; i < y; i++)
        print_line(map[i], sqr_size, i, y);
    for (int i = 0; i < sqr_size + 2; i++)
        my_putchar('*');
    my_putchar('\n');
}