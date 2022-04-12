/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_button.c
*/

#include "my.h"

button_t *init_struct_button(mouse_t *mouse, windowpause_t *window)
{
    button_t *button = malloc(sizeof(button_t));

    if (!button || !mouse || !window)
        return NULL;

    button->rect = sfRectangleShape_create();
    mouse->mouse = sfMouse_getPositionRenderWindow(window->window);
    button->position.x = mouse->mouse.x;
    button->position.y = mouse->mouse.y;
    button->size.x = 5;
    button->size.y = 5;
    sfRectangleShape_setPosition(button->rect, button->position);
    sfRectangleShape_setSize(button->rect, button->size);
    sfRectangleShape_setFillColor(button->rect, sfWhite);
    return (button);
}