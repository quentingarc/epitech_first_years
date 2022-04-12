/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Lib
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_printf(char *str, ...);
int my_put_unsigned_nb(unsigned int nb);
void my_flags(char options, va_list(flag));
void option_char(va_list options);
void option_nbr(va_list options);
void option_str(va_list options);

#endif /*MY_H*/