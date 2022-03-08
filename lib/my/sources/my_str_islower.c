/*
** EPITECH PROJECT, 2019
** islower
** File description:
** islower
*/

int my_str_islower(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < 97 && str[a] >= 0)
            return (0);
        if (str[a] < 127 && str[a] > 122)
            return (0);
        a++;
    }
    return (1);
}
