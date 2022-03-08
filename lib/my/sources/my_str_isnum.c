/*
** EPITECH PROJECT, 2019
** str_isnum
** File description:
** str_isnum
*/

int my_str_isnum(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < '0' && str[a] >= 0)
            return (0);
        if (str[a] < 127 && str[a] > '9')
            return (0);
        a++;
    }
    return (1);
}
