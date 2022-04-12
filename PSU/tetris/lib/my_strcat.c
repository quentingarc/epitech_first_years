/*
** EPITECH PROJECT, 2019
** strcatlib
** File description:
** MOmo
*/

#include "tetris.h"

char *my_strcat(char *dest, char *src)
{
    int len = my_strlen(dest);
    int inc = my_strlen(src);
    char *new = NULL;

    new = malloc(sizeof(char *) * (len * inc) + 1);
    inc = 0;
    len = 0;
    while (dest[len] != '\0') {
        new[len] = dest[len];
        len++;
    }
    while (src[inc] != '\0') {
        new[len + inc] = src[inc];
        inc = inc + 1;
    }
    new[len + inc] = '\0';
    return (new);
}