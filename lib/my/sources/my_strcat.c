/*
** EPITECH PROJECT, 2019
** strcat
** File description:
** strcat
*/

char *my_strcat(char *dest, char *src)
{
    int a = 0;
    int b = 0;

    if (dest[0] == '\0')
        return (src);
    while (dest[a] != '\0') {
        a++;
        if (dest[a] == '\0') {
            dest[a] = src[b];
            dest[a + 1] = '\0';
            b++;
        }
    }
    return (dest);
}
