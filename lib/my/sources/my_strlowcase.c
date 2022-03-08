/*
** EPITECH PROJECT, 2019
** strlowcase
** File description:
** strlowcase
*/

char *my_strlowcase(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= 65 && str[a] <= 90) {
            str[a] += 32;
        }
        a++;
    }
    return (str);
}
