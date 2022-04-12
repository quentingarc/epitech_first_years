/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** map
*/

#include "tetris.h"

void full_map(int ac, char **av)
{
    char **map = create_map(15, map);
    print_map(map);
}

char **create_map(int y, char **map)
{
    int column = 0;
    int line = 0;
    int nb = 0;
    int count = (y * 2 + 1);
    map = malloc(sizeof(char *) * (y * y) + 1);

    while (nb != y + 2) {
        map[line] = malloc(sizeof(char *) * (count + 1));
        map[line] = remove_stars(y, map, line, column);
        line = line + 1;
        column = 0;
        nb = nb + 1;
    }
    map[nb] = NULL;
    return (map);
}

void print_map(char **map)
{
    int index = 0;

    while (map[index] != NULL) {
        my_putstr(map[index]);
        my_putchar('\n');
        index = index + 1;
    }
    return;
}

char *remove_stars(int y, char **map, int line, int column)
{
    int count = 20;

    while (column != count) {
        if (line == 0 || line == y + 1) {
            map[line][column] = '-';
            column = column + 1;
        } else if (column == 0 || column == y + 4) {
            map[line][column] = '|';
            column = column + 1;
        } else {
            map[line][column] = ' ';
            column = column + 1;
        }
    }
    map[line][column] = '\0';
    return (map[line]);
}