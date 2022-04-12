/*
** EPITECH PROJECT, 2019
** getnbr_lib
** File description:
** Lib
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int compteur = 0;

    if (str == NULL)
        return (84);

    while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
    {
        if (str[i] == '-' || str[i] == '+') {
            compteur = compteur + 1;
        }
        i = i + 1;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - 48);
        i = i + 1;
    }
    return (nb);
}