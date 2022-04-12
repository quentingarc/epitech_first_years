/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** main.c
*/

#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd = open(argv[1], O_RDONLY);
    char *s = get_next_line(fd);

    while (s) {
        my_putstr(s);
        my_putchar('\n');
        free(s);
        s = get_next_line(fd);
    }
    return (0);
}