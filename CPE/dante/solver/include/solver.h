/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** solver.h
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
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

void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);
int my_atoi(char *str);

void my_printf(char *str, ...);
void opt_char(va_list ap);
void opt_str(va_list ap);
void opt_dec(va_list ap);

#endif /* SOLVER_H_ */