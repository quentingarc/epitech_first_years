/*
** EPITECH PROJECT, 2019
** generator
** File description:
** generator_ends.c
*/

#include "generator.h"

int check_before_last(maze_t *maze, int cy, int cx)
{
    int rd = 0;

    while (maze->board[cy][cx] != '\0') {
        if (maze->board[cy][cx] == 'X') {
            rd = rand() % 3;
            if (rd == 0 && cx > 1)
                maze->board[cy + 1][cx - 1] = '*';
        }
        cx = cx + 1;
    }
}

int check_last_case(maze_t *maze, int cy, int cx)
{
    int rd = 0;

    maze->board[maze->y - 1][maze->x - 1] = '*';
    rd = rand() % 2;
    if (rd == 0)
        maze->board[cy - 1][cx] = '*';
    else
        maze->board[cy][cx - 1] = '*';
    if (cy > 2)
        check_before_last(maze, cy - 1, 0);
    return (0);
}

int place_or_not(maze_t *maze, int cy, int cx)
{
    int rd = 0;

    rd = rand() % 2;
    if (rd == 0)
    {
        if (cy >= 1)
            maze->board[cy - 1][cx] = '*';
    }
    else
    {
        if (cx >= 1)
            maze->board[cy][cx - 1] = '*';
    }
    return (0);
}