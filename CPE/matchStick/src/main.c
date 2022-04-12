/*
** EPITECH PROJECT, 2019
** CPE_matchstick_bootstrap_2019
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av)
{
    int rtr = 0;

    if (error(ac, av) == 84)
    return (84);
    if (my_getnbr(av[1]) <= 100) {
        rtr = matchstick(ac, av);
        return (rtr);
    }
    return (84);
}