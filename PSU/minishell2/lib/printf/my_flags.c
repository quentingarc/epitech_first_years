/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_flags.c
*/

#include "my.h"

void my_flags(char options, va_list(flag))
{
    int inc = 0;
    const char *my_alpha = "cds";
    void (*board[3])(va_list) = {&option_char, &option_nbr, &option_str};

    while (my_alpha[inc] != '\0')
    {
        if (my_alpha[inc] == options)
            board[inc](flag);
        inc = inc + 1;
    }
}

void option_char(va_list options)
{
    my_putchar(va_arg(options, int));
}

void option_nbr(va_list options)
{
    my_put_nbr(va_arg(options, int));
}

void option_str(va_list options)
{
    my_putstr(va_arg(options, char *));
}