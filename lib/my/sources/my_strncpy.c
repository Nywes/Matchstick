/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    if (src[0] == '\0') {
        dest[a] = '\0';
    }
    while (src[a] != '\0' && a < n) {
        dest[a] = src[a];
        a++;
        if (n > a) {
            dest[a] = '\0';
        }
    }
    return (dest);
}
