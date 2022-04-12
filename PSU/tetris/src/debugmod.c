/*
** EPITECH PROJECT, 2019
** PSU_tetris_2019
** File description:
** debugmod.c
*/

#include "tetris.h"

void default_touch(mykey_t *touch)
{
    touch->left = "ˆEOD";
    touch->right = "ˆEOC";
    touch->turn = "ˆEOA";
    touch->drop = "ˆEOB";
    touch->quit = "q";
    touch->pause = "(space)";
    touch->level = "1";
    touch->next = "yes";
    touch->sizey = "20";
    touch->sizex = "10";
}

int check_arg(int ac, char **av, mykey_t *touch)
{
    int i = 0;
    default_touch(touch);

    while (i != ac) {
        if (my_strcmp(av[i], "-D") == 0) {
            change_touch(av, touch);
            debugmod(touch);
        }
        if (my_strcmp(av[i], "--help") == 0 || my_strcmp(av[i], "--h") == 0) {
            helper(av);
            return 0;
        }
        i += 1;
    }
    return 0;
}