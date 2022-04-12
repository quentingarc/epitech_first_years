/*
** EPITECH PROJECT, 2019
** quentingarcia
** File description:
** my_printf.c
*/

#include "my.h"

int	my_printf(char *str, ...)
{
    int inc = 0;
    va_list (flag);
    va_start(flag, str);
    while (str[inc] != '\0' )
    {
        if (str[inc] == '%' )
        {
            my_flags(str[inc + 1], flag);
            inc = inc + 1;
        }
        else {
            my_putchar(str[inc]);
        }
        inc = inc + 1;
    }
    va_end(flag);
    return (0);
}