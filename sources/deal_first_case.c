/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** deal_first_case
*/

#include "my.h"
#include "matchstick.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int check_if_lose_nbr_condition(int map_nbr, int ag2)
{
    for (int i = ag2 + 2; i < 200; i += (ag2 + 1)) {
        if (map_nbr == i)
            return (1);
    }
    return (0);
}

int withdraws_for_winning_case1(int *map_nbr, int ag2)
{
    int i = ag2 + 2;

    while (i < *map_nbr)
        i += (ag2 + 1);
    i -= (ag2 + 1);
    i = (*map_nbr - i);
    *map_nbr -= i;
    return (i);
}

int withdraw_for_winning(int *map_nbr, int ag2)
{
    if (check_if_lose_nbr_condition(*map_nbr, ag2)) {
        *map_nbr -= ag2;
        return (ag2);
    } else {
        return (withdraws_for_winning_case1(map_nbr, ag2));
    }
    return (0);
}

int deal_first_case(int *map_nbr, int ag2)
{
    int i = *map_nbr;

    if (*map_nbr == 1) {
        *map_nbr -= 1;
        return (1);
    }
    if (*map_nbr <= ag2) {
        *map_nbr -= *map_nbr - 1;
        return (i - 1);
    }
    if (*map_nbr == (ag2 + 1) || *map_nbr == (ag2 + 2)) {
        *map_nbr -= ag2;
        return (ag2);
    }
    if (*map_nbr > (ag2 + 2)) {
        return (withdraw_for_winning(map_nbr, ag2));
    }
    return (0);
}