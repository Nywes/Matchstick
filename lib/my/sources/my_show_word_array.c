/*
** EPITECH PROJECT, 2019
** show_word_array
** File description:
** show_word_array
*/

#include <stdlib.h>
#include "../includes/my.h"

int my_show_word_array(char const **tab)
{
    int a = 0;
    int b = 0;
    int c = 0;
    char *dest = malloc(sizeof(char) * (a + 1));

    while (tab[a] != 0) {
        while (tab[a][c] != '\0') {
            dest[b] = tab[a][c];
            b++;
            c++;
        }
        dest[b] = '\n';
        b++;
        a++;
        c = 0;
    }
    my_putstr(dest);
    free(dest);
    return (0);
}
