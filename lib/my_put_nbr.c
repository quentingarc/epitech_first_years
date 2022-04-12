/*
** EPITECH PROJECT, 2019
** put_char_lib
** File description:
** Lib
*/

#include <stdio.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0)
    {
        nb = nb * -1;
        my_putchar('-');
    }
    if (nb > 9)
    {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    else
        my_putchar((nb % 10) + 48);
    return (0);
}

int main()
{
    int nb = 1234;
    my_put_nbr(nb);
    return 0;
}