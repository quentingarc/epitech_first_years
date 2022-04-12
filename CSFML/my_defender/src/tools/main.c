/*
** EPITECH PROJECT, 2019
** defender
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av)
{
    if (!av)
        return (84);
    windowpause_t *window = init_struct_window_pause();
    mouse_t *mouse = init_struct_mouse(window);

    if (!mouse || !window)
        return (84);

    game(mouse, window);
    return (0);
}