/*
** EPITECH PROJECT, 2019
** strupcase
** File description:
** strupcase
*/

char *my_strupcase(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= 97 && str[a] <= 122) {
            str[a] -= 32;
        }
        a++;
    }
    return (str);
}
