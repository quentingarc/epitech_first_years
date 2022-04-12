/*
** EPITECH PROJECT, 2019
** me
** File description:
** check_error.c
*/

#include "generator.h"

int check_args(char *str)
{
    int inc = 0;

    while (str[inc] != '\0')
    {
        if (str[inc] < '0' || str[inc] > '9')
            return (84);
        inc = inc + 1;
    }
    if (my_atoi(str) < 1)
        return (84);
    return (0);
}

int check_error(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return (84);
    if ((check_args(av[1]) == 84) || (check_args(av[2]) == 84))
        return (84);
    if (ac == 4)
    {
        if (my_strcmp(av[3], "perfect") != 0)
            return (84);
    }
    return (0);
}