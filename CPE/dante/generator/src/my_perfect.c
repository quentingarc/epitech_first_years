/*
** EPITECH PROJECT, 2019
** generator
** File description:
** my_perfect.c
*/

#include "generator.h"

int my_perfect_generator(maze_t *maze)
{
    int cy = 0;
    int cx = 0;
    int rd = 0;

    while (cy < maze->y)
    {
        while (cx < maze->x)
        {
            if (maze->board[cy][cx] == '*')
                place_or_not(maze, cy, cx);
            cx = cx + 1;
        }
        cx = 0;
        cy = cy + 1;
    }
    check_last_case(maze, maze->y - 1, maze->x - 1);
    return (0);
}