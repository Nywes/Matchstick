/*
** EPITECH PROJECT, 2019
** strcmp
** File description:
** strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int a = 0;

    while (s1[a] != '\0') {
        if (s2[a] == '\0')
            return (s1[a]);
        if (s1[a] != s2[a]) {
            return (s1[a] - s2[a]);
        }
        a++;
    }
    if (s2[a] != '\0')
        return (s1[a] - s2[a]);
    return (0);
}
