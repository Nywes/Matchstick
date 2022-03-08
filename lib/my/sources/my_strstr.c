/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** my_strstr
*/

static int calculate_max(char const *to_find, int b)
{
    while (to_find[b] != '\0') {
        b++;
    }
    return (b);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int b = 0;
    int m = 0;

    calculate_max(to_find, b);
    if (b == 0)
        return (str);
    while (str[i] != '\0') {
        if (str[i] == to_find[m]) {
            m++;
        }
        else if (str[i] == to_find[0])
            m = 1;
        else
            m = 0;
        if (m == b)
            return (str + i - b + 1);
        i++;
    }
    return (0);
}
