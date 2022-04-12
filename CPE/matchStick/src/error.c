/*
** EPITECH PROJECT, 2019
** CPE_matchstick_bootstrap_2019
** File description:
** error.c
*/

#include "my.h"

int error_my_error(int ac, char **av)
{
    int destroyl = my_getnbr((av[2]));

    if (ac != 3)
        return (84);
    return (0);
}

int pipe_nb(char **map, int line, int y)
{
    int nb = 0;
    int x = ((y * 2) - 1);

    while (map[line][x] != '|' && x)
        x = x - 1;
    while (map[line][x] == '|') {
        nb += 1;
        x -= 1;
    }
    return (nb);
}

int product_error(char *linec, int remove, int destroys)
{
    if (my_str_isnum(linec) == 1) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (remove == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (-1);
    }
    if (destroys < remove) {
        my_printf("Error: you cannot remove \
more than %d matches per turn\n", destroys);
        return (-1);
    }
    return (0);
}

int error(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (my_str_isnum(av[2]) == 1 || my_str_isnum(av[1]) == 1)
        return (84);
    return (0);
}

int total_pipe(char **map)
{
    int nb = 0;
    int i = 1;
    int x = 1;

    while (map[i] != NULL) {
        while (map[i][x] != '*') {
            if (map[i][x] == '|')
                nb += 1;
            x += 1;
        }
        x = 1;
        i += 1;
    }
    return nb;
}