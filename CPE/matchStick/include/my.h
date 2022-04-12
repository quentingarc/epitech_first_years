/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** my.h
*/


#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/* lib */
int my_put_nbr(int nb);
int my_putchar(char c);
int my_str_isnum(char *str);
int	my_printf(char *str, ...);
int my_putstr(char const *str);
int my_getnbr(char const *str);
void option_nbr(va_list options);
void option_str(va_list options);
void option_char(va_list options);
void my_flags(char options, va_list(flag));

/* main */

int main(int ac, char **av);

/* loading */

void prmap(char **map);
char **my_pipe(int colu, char **map);
char **my_space(int colu, char **map, int line);
int printg(char *linec, char **av, int remove, int line);
int product(char **av, char *linec, int remove, char **map);

/*error*/

int error_my_error(int ac, char **av);
int pipe_nb(char **map, int line, int y);
int product_error(char *linec, int remove, int destroys);
int error(int ac, char **av);
int total_pipe(char **map);

/* matchstick */

char **prepar(int colu, int line);
int matchstick(int ac, char **av);
int game(int colu, char **map, char **av, int ac);
char **printn(char **map, int line, int y, int remove);
void display_map(int line, char **map, int remove, char **av);

/*irobot*/

char **robot(char **map, char **av, int line, int remove);
int check(int line, char **map, char **av, int remove);
int robot_line(char **map, int y, int line, int remove);
int game_bis(int line, int remove);

#endif /*MY_H*/