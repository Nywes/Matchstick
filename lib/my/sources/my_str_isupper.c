/*
** EPITECH PROJECT, 2019
** isupper
** File description:
** isupper
*/

int my_str_isupper(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] < 65 && str[a] >= 0)
            return (0);
        if (str[a] < 127 && str[a] > 90)
            return (0);
        a++;
    }
    return (1);
}
