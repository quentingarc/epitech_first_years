/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause.c
*/

#include "my.h"

int mpause_bis(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button)
{
    if (mouse->mouse.x >= 416 && mouse->mouse.x <= 515 &&
        mouse->mouse.y >= 300 && mouse->mouse.y <= 398) {
        sfRenderWindow_drawSprite(window->window,
        sprite->pause->buttonpause->bbplay, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            sprite->pause->mpause = 0;
    }
    if (mouse->mouse.x >= 524 && mouse->mouse.x <= 618 &&
        mouse->mouse.y >= 300 && mouse->mouse.y <= 398) {
        sfRenderWindow_drawSprite(window->window,
        sprite->pause->buttonpause->bbquit, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfRenderWindow_close(window->window);
            return 1;
        }
    }
    if (sprite->pause->minvent == 3)
        sfRenderWindow_drawSprite(window->window,
        sprite->inventory->inventory_sprite, NULL);
    return 0;
}

int mpause_b(sprite_t *sprite, windowpause_t *window)
{
    if (sprite->pause->minvent == 3) {
        sfRenderWindow_drawSprite(window->window,
        sprite->inventory->inventory_sprite, NULL);
        if (sprite->pause->minvent == 3)
            sfRenderWindow_drawSprite(window->window,
            sprite->inventory->inventory_sprite, NULL);
    }
    if (sprite->pause->mpause == 1 || sprite->pause->minvent == 3 ||
    sprite->pause->minvent == 6) {
        if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
            sprite->pause->mpause = 0;
            sprite->pause->minvent = 0;
        }
    }
}

int mpause(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button)
{
    text(sprite, window);
    if (sprite->pause->mpause == 1) {
        sprite->pause->minvent = 0;
        sfRenderWindow_drawSprite(window->window, sprite->pause->ppause, NULL);
        if (mouse->mouse.x >= 312 && mouse->mouse.x <= 413 &&
            mouse->mouse.y >= 300 && mouse->mouse.y <= 398) {
            sfRenderWindow_drawSprite(window->window,
            sprite->pause->buttonpause->bbmenu, NULL);
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                sfRenderWindow_close(window->window);
                return 2;
            }
        }
        if (mpause_bis(sprite, window, mouse, button) == 1)
            return 0;
    }
    mpause_b(sprite, window);
    plac_tower(mouse, window, button);
    return 0;
}