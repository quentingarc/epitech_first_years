/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_str_cmp.c
*/

#include "my.h"

int my_strcmp(char *str1, char *str2)
{
    int inc = 0;

    while (str1[inc] == str2[inc] && str1[inc + 1] != '=')
    {
        inc = inc + 1;
    }
    return (str1[inc] - str2[inc]);
}

int my_strcmpbis(char *str1, char *str2)
{
    int i = 0;

    if (str1 == NULL && str2 == NULL)
        return (1);
    if (str1 == NULL)
        return (0);
    while (str1[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}