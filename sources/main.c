/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** main
*/

#include <unistd.h>
#include "my.h"
#include "matchstick.h"

int main(int ac, char **ag)
{
    int i = 0;

    if (ac == 2) {
        if (ag[1][0] == '-' && ag[1][1] == 'h') {
            print_help();
            return (0);
        }
    }
    if (ac != 3) {
        write(2, "Invalid size of parameters\n", 27);
        return (84);
    }
    if (check_values(ag))
        return (84);
    i = execute_matchstick(ag);
    return (i);
}