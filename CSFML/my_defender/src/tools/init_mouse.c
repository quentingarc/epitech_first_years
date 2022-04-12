/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_mouse.c
*/

#include "my.h"

mouse_t *init_struct_mouse(windowpause_t *window)
{
    mouse_t *mouse = malloc(sizeof(mouse_t));

    if (!mouse || !window)
        return NULL;

    mouse->mouse;
    return (mouse);
}
