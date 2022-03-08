/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#ifndef __MATCHSTICK_H_
#define __MATCHSTICK_H_
#include <stdbool.h>

int execute_game_turn(int *map, int y, int j, char **ag);

int ai_play_his_turn(int *map, int y, int j, char **ag);

int player_play_his_turn(int *map, int y, int j, char **ag);

int manage_cases(int *map, int x, int y, int ag2);

int manage_first_case(int *map, int x, int y, int ag2);

int manage_second_case(int *map, int x, int y, int ag2);

int manage_third_case(int *map, int x, int y, int ag2);

int manage_fourth_case(int *map, int x, int y, int ag2);

int manage_fifth_case(int *map, int x, int y, int ag2);

void withdraw_for_equal(int *l_one, int l_two, int ag2, int line);

int count_for_it(int *map_line_one, int *map_line_two, int line);

bool check_if_long(int line, int ag2);

bool check_if_multiple(int line, int ag2);

int withdraws_max(int *map_line, int line);

int withdraws_to_prepare_win(int *l_one, int l_two, int line, int ag2);

void withdraw_to_leave_max(int *map_line, int ag2, int line);

int check_getline_return(int nb_matches, int ag2, int map_line);

int get_getline_nbr(char *str);

int check_if_lose_nbr_condition(int map_nbr, int ag2);

int withdraws_for_winning_case1(int *map_nbr, int ag2);

int withdraw_for_winning(int *map_nbr, int ag2);

int deal_first_case(int *map_nbr, int ag2);

int deal_second_case(int *map, int x, int ag2);

int deal_third_case(int *map, int x, int y, int ag2);

int deal_fourth_case(int *map, int x, int y);

int deal_fifth_case(int *map, int x, int y, int ag2);

int check_if_intresting(int *map, int ag1);

int withdraws_if_interesting(int *map, int ag1, int ag2);

int withdraws_if_not_yet_interesting(int *map, int ag1, int ag2);

int remove_max_or_enough(int *line_nbr, int ag2);

int ai_think(int *map, int ag1, int ag2);

int get_nbr_of_matches(int *nb_matches, int ag2, int map_line, bool *b);

int get_nbr_of_lines(int *line, int ag1);

void print_help(void);

int check_values(char **ag);

int win_lose_condition(int *map, int y);

int modify_map(int *map, int ag1, int ag2);

void print_map(int *map, int y, int sqr_size);

void print_line(int sticks_on_line, int sqr_size, int map_line, int y);

int execute_matchstick(char **ag);

#endif
