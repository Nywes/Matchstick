/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** my_is_prime
*/

int calcul(int a, int b, int nb, int c)
{
    if ((a * b) == nb) {
        c = 1;
        return (c);
    }
    return (c);
}

int my_is_prime(int nb)
{
    int a = 0;
    int b = 0;
    int c = 0;

    if (nb == 1 || nb == 0) {
        return (0);
    }
    while (a < nb) {
        while (b < nb) {
            c = calcul(a, b, nb, c);
            b++;
        }
        a++;
        b = 0;
    }
    if (c == 1)
        return (0);
    return (1);
}
