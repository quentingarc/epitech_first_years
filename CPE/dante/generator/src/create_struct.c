/*
** EPITECH PROJECT, 2019
** me
** File description:
** create_struct.c
*/

#include "generator.h"

maze_t *create_struct_maze(char **av)
{
    maze_t *maze = malloc(sizeof(maze_t));

    if (maze == NULL)
        return (NULL);
    maze->board = NULL;
    maze->x = my_atoi(av[1]);
    maze->y = my_atoi(av[2]);
    return (maze);
}