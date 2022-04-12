/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2019
** File description:
** gnl.c
*/

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int i = 0;
    char *buffer = malloc(sizeof(char) * READ_SIZE + 1);
    static char *stock = NULL;
    stock = malloc(sizeof(char) * READ_SIZE + 1);
    int length = my_strlen(stock) + READ_SIZE;
    char *two_str = malloc(sizeof(char) * length);

    if (fd == -1 || !buffer || !stock || READ_SIZE <= 0 || !two_str)
        return NULL;
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            stock[i] = buffer[i];
            i += 1;
            return NULL;
        }
        two_str = my_strcat(buffer, stock);
        read(fd, buffer, READ_SIZE);
        i += 1;
    }
    return buffer;
}