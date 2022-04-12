/*
** EPITECH PROJECT, 2019
** emacs
** File description:
** my_put_nbr
*/

#include "tetris.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar((nb % 10) + '0');
    }
    return (0);
}