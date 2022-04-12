/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** tetriminos
*/

#include "tetris.h"

int  open_directory(char *path)
{
    struct dirent *finfo;
    DIR *direc = opendir(path);
    int index = 20;
    char *array = NULL;
    char **stock = malloc(sizeof(char *) * (7 + 1));
    int y = 0;

    if (direc == NULL)
        return (-1);
    while ((finfo = readdir(direc))) {
        if (finfo->d_name[0] != '.') {
            array = my_strcat("./tetriminos/", finfo->d_name);
            stock[y] = open_file(array);
            y = y  + 1;
        }
    }
    stock[y] = NULL;
    closedir(direc);
    print_map(stock);
    return (0);
}

char *open_file(char *path)
{
    int fd = open(path, O_RDONLY);
    int index = 0;
    struct stat length;
    stat(path, &length);
    char *buf_win = malloc(length.st_size);
    read(fd, buf_win, length.st_size);
    while (buf_win[index] != '\0') {
        if (buf_win[index] >= '0' && buf_win[index] <= '9')
            buf_win[index] = ' ';
        index = index + 1;
    }
    close(fd);
    return (buf_win);
}