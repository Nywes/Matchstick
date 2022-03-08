/*
** EPITECH PROJECT, 2019
** strncmp
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    while (a != n) {
        if (s1[a] == '\0')
            return (s1[a] - s2[a]);
        if (s2[a] == '\0')
            return (s1[a]);
        if (s1[a] != s2[a]) {
            return (s1[a] - s2[a]);
        }
        a++;
    }
    return (0);
}
