/*
** EPITECH PROJECT, 2019
** generator
** File description:
** create_map.c
*/

#include "generator.h"

char *cpy_line_wth_x(maze_t *maze, int opt)
{
    int cx = 1;
    char *new = malloc(sizeof(char) * (maze->x + 1));

    if (new == NULL)
        return (NULL);
    new[0] = '*';
    while (cx < maze->x)
    {
        new[cx] = 'X';
        cx = cx + 1;
        if ((opt % 2) == 0)
        {
            new[cx] = '*';
            cx = cx + 1;
        }
    }
    new[cx] = '\0';
    return (new);
}

int create_first_line(maze_t *maze)
{
    int cx = 0;

    if (!(maze->board[0] = malloc(sizeof(char) * (maze->x + 1))))
        return (84);
    while (cx < maze->x) {
        maze->board[0][cx] = '*';
        cx = cx + 1;
    }
    return (0);
}

int create_my_map(maze_t *maze)
{
    int cy = 1;
    int opt = 1;

    if (!(maze->board = malloc(sizeof(char *) * (maze->y + 1))))
        return (84);
    if (create_first_line(maze) == 84)
        return (84);
    while (cy < maze->y) {
        maze->board[cy] = cpy_line_wth_x(maze, opt);
        if (maze->board[cy] == NULL)
            return (84);
        opt = opt + 1;
        cy = cy + 1;
    }
    maze->board[cy] = NULL;
    return (0);
}

int create_map(int ac, char **av)
{
    maze_t *maze = create_struct_maze(av);
    if (maze == NULL)
        return (84);
    if (create_my_map(maze) == 84)
        return (84);
    if (ac == 3)
        my_imperfect_generator(maze);
    else if (ac == 4)
        my_perfect_generator(maze);
    display_board(maze);
    return (0);
}