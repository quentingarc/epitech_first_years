/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** error_handling.c
*/

#include "my.h"

int check_error_start(char **input)
{
    int y = 0;

    while (input[y] != NULL){
        if (my_strcmp(input[y], "##start") == 1){
            if (check_error_end(input, y) == 0)
                return (0);
        }
        y = y + 1;
    }
    return (84);
}

int check_error_end(char **input, int y)
{
    while (input[y] != NULL){
        if (my_strcmp(input[y], "##end") == 1)
            return (0);
        y = y + 1;
    }
    return (84);
}