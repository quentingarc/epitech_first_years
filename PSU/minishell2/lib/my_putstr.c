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

    while (str[j] != '\0')
    {
        my_putchar(str[j]);
        j = j + 1;
    }
    return (0);
}