/*
** EPITECH PROJECT, 2019
** quentin
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av, char **env)
{
    if (*env == NULL)
        return (84);
    else if (ac == 1)
        my_doodle(ac, av);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help(ac, av);
    else
        return (84);
}