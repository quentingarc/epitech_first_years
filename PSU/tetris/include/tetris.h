/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** tetris
*/

#ifndef TETRIS_H_
#define TETRIS_H_
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <ncurses.h>
#include <dirent.h>

typedef struct s_mykey {
    char *left;
    char *right;
    char *turn;
    char *drop;
    char *quit;
    char *pause;
    char *map;
    char *tetri;
    char *debug;
    char *level;
    char *next;
    char *sizex;
    char *sizey;
} mykey_t;


/* lib functions */

int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
int my_str_isnum(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
int d_flag(va_list ap);
int i_flag(va_list ap);
int c_flag(va_list ap);
int s_flag(va_list ap);
void check(char const *str, int inc, va_list *ap);
int condition(char const *str);
int my_printf(char const *str, ...);
int my_strcmp(char *str1, char *str2);
int my_strncmp(char *str1, char *str2, int n);
char *my_strcat(char *dest, char *src);
char *my_strncpy(char *dest, char const *src, int n);

/* helper */

void helper(char **av);

/* map */

void full_map(int ac, char **av);
char **create_map(int y, char **map);
void print_map(char **map);
char *remove_stars(int y, char **map, int line, int column);
void debugmod(mykey_t *touch);
int my_flags(char **av, int i);
void default_touch(mykey_t *touch);
int check_arg(int ac, char **av, mykey_t *touch);
void change_touch(char **av, mykey_t *touch);
void touch_control(char **av, mykey_t *touch, int i);
void touch_mouv(char **av, mykey_t *touch, int i);
void map_size(char **av, mykey_t *touch, int i);
int open_directory(char *path);
char *open_file(char *array);
int stock_tetrimino(char *array, char *buf_win, struct stat length);
void stock_the_rest(char *array, char *buf_win, struct stat length, int index);

#endif /* !TETRIS_H_ */
