/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2019
** File description:
** get_next_line.h
*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef READ_SIZE
# define READ_SIZE 5
#endif /* !READ_SIZE */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd);

void my_putchar(char c);
int my_putstr(char const *str);
char *my_strcat(char *dest, char *src);
int my_strlen(char const *str);

#endif /* !GET_NEXT_LINE_H */