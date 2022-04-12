/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** my.h
*/


#ifndef MY_H
#define MY_H

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>

int my_putstr(char const *str);
int my_ls(int ac, char **av);
void my_putchar(char c);
int ls_l(int ac, char **av);
int my_open(int ac, char **av, DIR *ls);
int my_check(int ac, char **av);

#endif /*MY_H*/