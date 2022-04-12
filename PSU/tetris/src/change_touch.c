/*
** EPITECH PROJECT, 2019
** PSU_tetris_2019
** File description:
** change_touch.c
*/

#include "tetris.h"

void change_touch(char **av, mykey_t *touch)
{
    int i = 0;

    while (av[i] != '\0') {
        touch_mouv(av, touch, i);
        if (my_strcmp(av[i], "-t") == 0 && av[i + 1] != NULL)
            touch->turn = av[i + 1];
        if (my_strcmp(av[i], "-w") == 0 && av[i + 1] != NULL)
            touch->next = av[i + 1];
        touch_control(av, touch, i);
        i += 1;
    }
}

void touch_mouv(char **av, mykey_t *touch, int i)
{
    if (my_strcmp(av[i], "-L") == 0 && av[i + 1] != NULL)
        touch->level = av[i + 1];
    if (my_strcmp(av[i], "-l") == 0 && av[i + 1] != NULL)
        touch->left = av[i + 1];
    if (my_strcmp(av[i], "-r") == 0 && av[i + 1] != NULL)
        touch->right = av[i + 1];
}

void touch_control(char **av, mykey_t *touch, int i)
{
    if (my_strcmp(av[i], "-d") == 0 && av[i + 1] != NULL)
        touch->drop = av[i + 1];
    if (my_strcmp(av[i], "-q") == 0 && av[i + 1] != NULL)
        touch->quit = av[i + 1];
    if (my_strcmp(av[i], "-p") == 0 && av[i + 1] != NULL)
        touch->pause = av[i + 1];
}

void debugmod(mykey_t *touch)
{
    my_printf("*** DEBUG MODE ***\n");
    my_printf("Key Left : %s\n", touch->left);
    my_printf("Key Right : %s\n", touch->right);
    my_printf("Key Turn : %s\n", touch->turn);
    my_printf("Key Drop : %s\n", touch->drop);
    my_printf("Key Quit : %s\n", touch->quit);
    my_printf("Key Pause : %s\n", touch->pause);
    my_printf("Next : %s\n", touch->next);
    my_printf("Level : %s\n", touch->level);
    my_printf("Size : %s*%s\n", touch->sizey, touch->sizex);
    open_directory("tetriminos");
    my_printf("Press any key to start Tetris\n");
}