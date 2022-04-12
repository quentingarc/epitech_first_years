/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** irobot.c
*/

#include "my.h"

char **robot(char **map, char **av , int line, int remove)
{
    int y = 1;
    int x = ((my_getnbr(av[1]) * 2) - 1);
    int nb_pipe = pipe_nb(map, line, y);
    int save = x;

    while (map[y] != NULL) {
        while (map[y][x] != '*') {
            if (map[y][x] == '|') {
                map[y][x] = ' ';
                my_printf("\nAI's turn...\nAI removed %d \
match(es) from line %d\n", 1, y);
                prmap(map);
                return map;
            }
            x -= 1;
        }
        x = save;
        y += 1;
    }
    return map;
}

int check(int line, char **map, char **av, int remove)
{
    int nb = 0;

    if (remove > 0 && line > 0) {
        my_printf("Player removed %d match(es) \
from line %d\n", remove, line);
        display_map(line, map, remove, av);
    }
    nb = total_pipe(map);
    if (nb == 0)
        return 2;
    robot(map, av, line , remove);
    nb = total_pipe(map);
    if (nb != 0)
        my_printf("\nYour turn:\n");
    if (nb == 0)
        return 1;
return (0);
}

int robot_line(char **map, int y, int line, int remove)
{
    int nb = 0;
    int i = 1;
    int x = 1;
    int pipe = 0;

    while (map[i] != NULL) {
        while (map[i][x] != '*' ||
        (map[i][x] != ' ' && map[i][x - 1] == '|')) {
            if (map[i][x] == '|')
                nb += 1;
            x = x + 1;
        }
        if (nb > remove)
            return i;
        x = 1;
        i += 1;
    }
    return i - 1;
}

int game_bis(int line, int remove)
{
    if (line == -2 || remove == -2)
        return (0);
    if (line == -2 || remove == -2)
        return (0);
    return 0;
}