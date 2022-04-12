/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char **argv)
{
    char *test = getline_file();
    if (my_strlen(test) == 0)
        return (84);
    char **input = piece_to_array(test);
    if (check_error_start(input) == 84)
        return (84);
    print_input(input);
    dijkstra(input);
}