/*
** EPITECH PROJECT, 2019
** is_prime_lib
** File description:
** Lib
*/

int my_is_prime(int nb)
{
    int nb2 = 2;

    if (nb == 2) {
        return (1);
    } else if (nb == 1) {
        return (0);
    }
    while (nb % nb2 > 0) {
        nb2 = nb2 + 1;
        if (nb2 == nb) {
            return (1);
        }
    }
    if (nb / nb == 1 && nb / 1 == nb && nb / nb2 != 1)
        return (0);
}