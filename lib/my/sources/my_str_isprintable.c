/*
** EPITECH PROJECT, 2019
** isprintable
** File description:
** isprintable
*/

int my_str_isprintable(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < 32 && str[a] >= 0) {
            return (0);
        }
        if (str[a] == 127)
            return (0);
        a++;
    }
    return (1);
}
