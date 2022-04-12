/*
** EPITECH PROJECT, 2019
** revstr_lib
** File description:
** Lib
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char truc;

    while (str[i] != '\0') {
        i = i + 1;
    }
    i = i - 1;

    while (j < i) {
            truc = str[i];
            str[i] = str[j];
            str[j] = truc;
            j = j + 1;
            i = i - 1;
    }
    return (str);
}