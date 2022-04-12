/*
** EPITECH PROJECT, 2019
** putstr_lib
** File description:
** Lib
*/

#include "my.h"

int my_putstr(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        my_putchar(str[j]);
        j = j + 1;
    }
    return (0);
}

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    if (nb >= 9) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    else
        my_putchar((nb % 10) + 48);
    return (0);
}