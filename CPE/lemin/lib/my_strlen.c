/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** .
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return (i);
}

int my_strlen_custom(char const *str)
{
    int i = 0;
    int stock = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '\n')
            stock = stock + 1;
        i = i + 1;
    }
    return (stock);
}