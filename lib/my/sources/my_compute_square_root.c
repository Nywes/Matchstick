/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i <= nb) {
        if ((i * i) == nb) {
            return (i);
        }
        i++;
    }
    return (0);
}
