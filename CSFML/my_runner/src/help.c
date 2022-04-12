/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** help.c
*/

#include "my.h"

int help(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h')
    {
        my_putstr("Finite runner created with CSFML.\n\nUSAGE \n\n./my_runner\
map.txt \n\nOPTIONS \n\n-i launch the game in infinity mode.\n-h print the\
usage and quit.\n\nUSER INTERACTIONS\n\nSPACE_KEY jump.\n");
    }
    return (0);
}