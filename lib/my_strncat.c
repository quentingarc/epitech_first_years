/*
** EPITECH PROJECT, 2019
** strncatlib
** File description:
** Lib
*/

#include "my.h"

char *my_strncat (char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i = i + 1;
        dest[dest_len + i] = '\0';
    }
    dest[dest_len + nb] = '\0';
    return (dest);
}