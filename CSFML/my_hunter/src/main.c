/*
** EPITECH PROJECT, 2019
** quentin
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av, char **env)
{
    if (*env == NULL)
    return (84);
    else
    my_marappy(ac, av);
}