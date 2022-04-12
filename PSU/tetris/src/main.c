/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** main
*/

#include "tetris.h"

int main(int ac, char **av)
{
    mykey_t *touch = malloc(sizeof(key_t));
    if (touch == NULL)
        return 84;
    check_arg(ac, av, touch);
    if (ac == 1)
        full_map(ac, av);
    return (0);
}