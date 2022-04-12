/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** loading.c
*/

#include "my.h"

void prmap(char **map)
{
    int i = 0;

    while (map[i] != NULL) {
        my_putstr(map[i]);
        my_putchar('\n');
        i = i + 1;
    }
}

char **my_space(int colu, char **map, int line)
{
    int x = 1;
    int y = 1;

    while (y != colu - 1) {
        while (x != line - 1) {
            map[y][x] = ' ';
            x = x + 1;
        }
        y = y + 1;
        x = 1;
    }
    return (map);
}

char **my_pipe(int colu, char **map)
{
    int y = 1;
    int x = 1;
    int deb = colu - 2;
    int end = colu - 2;

    map[1][deb] = '|';
    while (y != colu - 1) {
        while (x < end + 1 && y != 1) {
            map[y][x] = '|';
            x = x + 1;
        }
        deb -= 1;
        end += 1;
        x = deb;
        y = y + 1;
    }
    return (map);
}

int product(char **av, char *linec, int remove, char **map)
{
    size_t bufsize = 2;
    int line = my_getnbr((linec));
    int destroys = my_getnbr((av[2]));

    my_printf("Matches: ");
    if (getline(&linec, &bufsize, stdin) == EOF)
        return (-2);
    remove = my_getnbr((linec));
    if (product_error(linec, remove, destroys) == -1)
        return (-1);
    if (pipe_nb(map, line, my_getnbr(av[1])) < remove) {
        my_printf("Error: not enough matches on this line\n");
        return (-1);
    }
    return (remove);
}

int printg(char *linec, char **av, int remove, int line)
{
    int destroys = my_getnbr(av[1]);
    size_t bufsize = 2;

    my_printf("Line: ");
    if (getline(&linec, &bufsize, stdin) == EOF)
        return (-2);
    line = my_getnbr((linec));
    if (my_str_isnum(linec) == 1) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (line > destroys || line == 0) {
        my_printf("Error: this line is out of range\n");
        return (-1);
    }
    return (line);
}