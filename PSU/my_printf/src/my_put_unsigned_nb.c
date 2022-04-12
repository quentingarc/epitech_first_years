/*
** EPITECH PROJECT, 2019
** quentingarcia
** File description:
** my_put_unsigned_nb.c
*/

#include "my.h"

int my_put_unsigned_nb(unsigned int nb)
{
    if (nb > 9) {
        my_put_unsigned_nb(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    else
        my_putchar((nb % 10) + 48);
    return (0);
}