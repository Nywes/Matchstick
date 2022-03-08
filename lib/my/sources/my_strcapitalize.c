/*
** EPITECH PROJECT, 2019
** strcapitalize
** File description:
** strcapitalize
*/

void check_if(char *str, int a)
{
    if (str[a - 1] >= 0 && str[a -1] < 48) {
        if (str[a] > 96 && str[a] < 123)
            str[a] -= 32;
    }
    if (str[a - 1] > 57 && str[a - 1] < 65) {
        if (str[a] > 96 && str[a] < 123)
            str[a] -= 32;
    }
    if (str[a - 1] > 90 && str[a - 1] < 97) {
        if (str[a] > 96 && str[a] < 123)
            str[a] -= 32;
    }
    if (str[a - 1] > 122 && str[a - 1] < 127) {
        if (str[a] > 96 && str[a] < 123)
            str[a] -= 32;
    }
}

void check_letters(char *str, int a)
{
    if (str[a] >= 65 && str[a] <= 90) {
        str[a] += 32;
    }
    check_if(str, a);
}

char *my_strcapitalize(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        check_letters(str, a);
        a++;
    }
    return (str);
}
