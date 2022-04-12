/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stddef.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <string.h>

/*lem_in functions :*/
int my_strlen(char const *str);
char *getline_file(void);
char *my_strcat(char *dest, char const *src);
int print_input(char **test);
char **piece_to_array(char *piece);
char *cpy_piece_to_array(char *piece, int inc, int len);
int my_strlen(char const *str);
int my_strlen_custom(char const *str);
int check_error_start(char **input);
int check_error_end(char **input, int y);

/*my_printf functions :*/
int my_putstr(char const *str);
int my_put_nbru(long int nb);
int my_put_nbr(int nb);
int flags(char w, va_list ap);
void my_putchar (char c);
int my_printf(char *fmt, ...);
int va_my_putchar(va_list ap);
int va_put_nbr(va_list ap);
int va_my_putstr(va_list ap);
int va_my_put_nbru(va_list ap);

/*lib functions :*/
int my_strcmp(char *str1, char *str2);

int dijkstra(char **input);
char *recup_ants(char **input, char *ants);
char *recup_start(char **input, char *start);
char *recup_end(char **input, char *end);
char **recup_tunnel(char **input, char **tunnel);

#endif /* MY_H_ */