/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_str_cmp.c
*/

#include "tetris.h"

int my_strcmp(char *str1, char *str2)
{
    int inc = 0;

    while (str1[inc] == str2[inc] && str1[inc] != '\0' && str2[inc] != '\0') {
        inc = inc + 1;
    }
    return (str1[inc] - str2[inc]);
}

int my_strncmp(char *str1, char *str2, int n)
{
    int inc = 0;

    while (str1[inc] == str2[inc] && str1[inc] != '\0' && str2[inc] != '\0') {
        inc = inc + 1;
        if (n != inc)
            return (str1[inc] - str2[inc]);
    }
    return (1);
}