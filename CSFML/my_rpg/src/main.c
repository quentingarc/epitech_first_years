/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **env)
{
    if (ac != 1)
        return 84;
    game(env);
    return (0);
}