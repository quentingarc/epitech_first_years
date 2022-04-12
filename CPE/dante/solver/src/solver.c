/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** solver.c
*/

#include "solver.h"

int solver(char **av)
{
    char *path = av[1];
    int fd = open(path, O_RDONLY);
    struct stat length;
    stat(path, &length);
    char *buffer = malloc(length.st_size);
    read(fd, buffer, length.st_size);
    write(1, buffer, length.st_size);
    return 0;
}