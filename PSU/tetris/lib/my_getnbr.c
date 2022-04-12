/*
** EPITECH PROJECT, 2019
** emacs
** File description:
** getnbr
*/

#include "tetris.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int compt = 0;

    while (str[i] != '\0' && (str[i] < '0' || str[i] > '9')) {
        if (str[i] == '-' || str[i] == '+') {
            compt = compt + 1;
        }
        i = i + 1;
    }

    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
        nb = (nb * 10) + (str[i] - '0');
        i = i + 1;
    }
    return (nb);
}