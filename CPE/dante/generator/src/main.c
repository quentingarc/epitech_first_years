/*
** EPITECH PROJECT, 2019
** me
** File description:
** main.c
*/

#include "generator.h"

int main(int ac, char **av)
{
    srand(time(NULL));
    if (check_error(ac, av) == 84)
        return (84);
    if (create_map(ac, av) == 84)
        return (84);
    return (0);
}