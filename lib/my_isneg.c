/*
** EPITECH PROJECT, 2019
** isneg_lib
** File description:
** isneg
*/

#include "my.h"

int my_isneg(int nb)
{
    if (nb < 0)
    my_putchar('N');
    else
    my_putchar('P');

    return (0);
}