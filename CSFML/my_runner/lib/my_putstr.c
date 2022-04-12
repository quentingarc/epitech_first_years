/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
