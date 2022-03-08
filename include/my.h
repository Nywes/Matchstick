/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#ifndef __MY_H_
#define __MY_H_
#include <stdbool.h>

int my_printf(const char *, ...);

int my_put_uns_nbr(unsigned int);

int my_putnbr_base(int, char const*);

long my_put_long_nbr(long);

int my_char_isnum(char);

void my_putchar(char);

int my_isneg(int);

int my_put_nbr(int);

void my_swap(int*, int*);

int my_putstr(char const*);

int my_strlen(char const*);

int my_getnbr(char const*);

void my_sort_int_array(void);

int my_compute_power_rec(int, int);

int my_compute_square_root(int);

int my_is_prime(int);

int my_find_prime_sup(int);

char *my_strcpy(char*, char const*);

char *my_strncpy(char*, char const*, int);

char *my_revstr(char*);

char *my_strstr(char*, char const*);

int my_strcmp(char const*, char const*);

int my_strncmp(char const*, char const*);

char *my_strupcase(char*);

char *my_strlowcase(char*);

char *my_strcapitalize(char*);

int my_str_isalpha(char const*);

int my_str_isnum(char const*);

int my_str_islower(char const*);

int my_str_isupper(char const*);

int my_str_isprintable(char const*);

int my_showstr(char const*);

int my_showmem(void);

char my_strcat(char*, char const*);

char *my_strncat(char*, char const*, int);

char *concat_params(int, char**);

int calcul(int, int, int);

int my_show_word_array(char const**);

int check_if(char*, int);

int check_letters(char*, int);

char *my_strdup(char);

int check_while(char*, char, int);

char *check_right_thing(char*, char*);

int delete_after(char*, int);

char **my_str_to_word_array(char *str);

#endif
