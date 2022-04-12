/*
** EPITECH PROJECT, 2019
** lib_strlen
** File description:
** Lib
*/

//#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}