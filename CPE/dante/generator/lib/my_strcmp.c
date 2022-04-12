/*
** EPITECH PROJECT, 2019
** PSU_bstetris_2019
** File description:
** my_strcmp.c
*/

#include "generator.h"

int my_strcmp(char *str1, char *str2)
{
    int inc = 0;

    while (str1[inc] == str2[inc] && str1[inc] != '\0' && str2[inc] != '\0')
    {
        inc = inc + 1;
    }
    return (str1[inc] - str2[inc]);
}