/*
** EPITECH PROJECT, 2019
** emacs
** File description:
** my_printf
*/

#include "tetris.h"

int d_flag(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
    return (0);
}

int i_flag(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
    return (0);
}

int c_flag(va_list ap)
{
    my_putchar(va_arg(ap, int));
    return (0);
}

int s_flag(va_list ap)
{
    my_putstr(va_arg(ap, char *));
    return (0);
}