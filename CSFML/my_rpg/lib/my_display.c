/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my_display.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int inc = 0;

    while (str[inc] != '\0') {
        my_putchar(str[inc]);
        inc = inc + 1;
    }
}

void my_put_nbr(int nb)
{
    if (nb < 0) {
        if (nb > -10) {
            my_putchar('-');
            my_putchar((nb * -1) + 48);
        }
        else {
            my_putchar('-');
            my_put_nbr((nb / 10) * -1);
            my_putchar(((nb % 10) * -1) + 48);
        }
    }
    else if (nb < 10 && nb > 0) {
        my_putchar(nb + 48);
    }
    else {
        if (nb >= 10) {
            my_put_nbr(nb / 10);
        }
        my_putchar((nb % 10) + '0');
    }
}