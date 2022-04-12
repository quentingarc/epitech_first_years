/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** .
*/

#include "my.h"

int my_putstr(char const *str)
{
    int idx = 0;

    while (str[idx] != '\0')
    {
        my_putchar(str[idx]);
        idx = idx + 1;
    }
    return (0);
}