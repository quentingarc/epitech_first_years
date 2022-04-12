/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** matchstick.c
*/

#include "my.h"

int matchstick(int ac, char **av)
{
    int y = my_getnbr(av[1]);
    char **map = prepar(y + 2, ((y * 2) + 1));
    int colu = y * y;
    int rtn = 3;

    my_space(y + 2, map, ((y * 2) + 1));
    my_pipe(y + 2, map);
    prmap(map);
    my_printf("\nYour turn:\n");
    while (rtn == 3)
        rtn = game(colu, map, av, ac);
    if (rtn == 1)
        my_printf("I lost... snif... but I'll get you next time!!\n");
    else if (rtn == 2)
        my_printf("You lost, too bad...\n");

    return (rtn);
}

char **prepar(int colu, int line)
{
    int nb = 0;
    int x = 0;
    int y = 0;
    char **board = malloc(sizeof(char *) * (colu * line) + 1);

    board[y] = NULL;
    while (nb != colu) {
        board[y] = malloc(sizeof(char *) * (line) + 1);
        while (x < line) {
            board[y][x] = '*';
            x++;
        }
        x = 0;
        y = y + 1;
        nb = nb + 1;
    }
    return (board);
}

int game(int remove, char **map, char **av, int ac)
{
    int colu = total_pipe(map);
    size_t bufsize = 2;
    char *linec = (char *)malloc((bufsize + 1) * sizeof(char));
    int line = 0;
    int win = 0;

    while (colu != 0) {
        if ((line = printg(linec, av, remove, line)) < -1)
            return (0);
        if (line != -1)
            if ((remove = product(av, linec, remove, map)) < -1)
                return (0);
        if ((remove != -1) && (line != -1)) {
            win = check(line, map, av, remove);
        colu = colu - remove;
        if (win != 0)
            return (win);
        }
    }
    return (2);
}

void display_map(int line, char **map, int remove, char **av)
{
    printn(map, line, my_getnbr(av[1]), remove);
    prmap(map);
}

char **printn(char **map, int line, int y, int remove)
{
    int x = ((y * 2) - 1);

    while (map[line][x] != '|') {
        x = x - 1;
    }
    while (remove > 0) {
        map[line][x] = ' ';
        x -= 1;
        remove -= 1;
    }
    return (map);
}