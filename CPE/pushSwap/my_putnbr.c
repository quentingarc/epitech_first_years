/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** my_putnbr.c
*/

#include "partage.h"

int my_put_nbr(int nb)
{
    long nombre = nb;

    if (nombre < 0)
    {
        my_putchar('-');
        nombre = -nombre;
    }
    if (nombre >= 10)
    {
        my_put_nbr(nombre / 10);
        my_put_nbr(nombre % 10);
    }
    else
        my_putchar(nombre + 48);
    return (0);
}