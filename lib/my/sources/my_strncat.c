/*
** EPITECH PROJECT, 2019
** strncat
** File description:
** strncat
*/

void check_while(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    while (dest[a] != '\0' && b < nb) {
        a++;
        if (dest[a] == '\0') {
            dest[a] = src[b];
            dest[a + 1] = '\0';
            b++;
        }
    }
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int c = 0;

    if (dest[0] == '\0') {
        while (c < nb) {
            dest[c] = src[c];
            c++;
        }
        return (dest);
    }
    check_while(dest, src, nb);
    return (dest);
}
