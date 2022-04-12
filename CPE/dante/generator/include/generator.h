/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** generator.h
*/

#ifndef GENERATOR_H_
#define GENERATOR_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <signal.h>
#include <time.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

typedef struct maze_s
{
    char **board;
    int x;
    int y;
} maze_t;

maze_t *create_struct_maze(char **av);
void redirect_all_stdout(void);

void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);
int my_atoi(char *str);
void display_board(maze_t *maze);
int my_strcmp(char *str1, char *str2);

void my_printf(char *str, ...);
void opt_char(va_list ap);
void opt_str(va_list ap);
void opt_dec(va_list ap);

int check_error(int ac, char **av);
int create_map(int ac, char **av);

int my_perfect_generator(maze_t *maze);
int my_imperfect_generator(maze_t *maze);

int check_last_case(maze_t *maze, int cy, int cx);
int place_or_not(maze_t *maze, int cy, int cx);
int check_before_last(maze_t *maze, int cy, int cx);
#endif /* GENERATOR_H_ */