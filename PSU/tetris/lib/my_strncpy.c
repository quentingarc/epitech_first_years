/*
** EPITECH PROJECT, 2019
** strncpylib
** File description:
** Lib
*/

#include "tetris.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n && src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    if (i < n && src[i] == '\0')
        dest[i] = '\0';
    return (dest);
}