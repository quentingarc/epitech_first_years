/*
** EPITECH PROJECT, 2019
** strcatlib
** File description:
** MOmo
*/

#include "get_next_line.h"

char *my_strcat(char *dest, char *src)
{
    int len = 0;
    int i = 0;
    int j = 0;
    len = my_strlen(dest) + my_strlen(src) + 1;
    char *new = NULL;

    new = malloc(sizeof(char *) * len);
    while (dest[i] != '\0') {
        new[i] = dest[i];
        i += 1;
    }
    while (src[j] != '\0') {
        new[i + j] = src[j];
        j += 1;
    }
    new[i + j] = '\0';
    return (new);
}
