/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** winn.c
*/

#include "my.h"

void my_clock_winn(sprite_t *sprite, windowpause_t *window)
{
    sprite->winn->timewinn =
    sfClock_getElapsedTime(sprite->winn->cwinn);
    sprite->winn->scd =
    sprite->winn->timewinn.microseconds / 1000000.0;
        sfRenderWindow_drawSprite(window->window,
        sprite->winn->wwinn, NULL);
    if (sprite->winn->scd > 0.15) {
        sprite->winn->rectwinn.left += 400;
        if (sprite->winn->rectwinn.left == 5600)
            sprite->winn->rectwinn.left = 0;
        sfSprite_setTextureRect(sprite->winn->wwinn,
        sprite->winn->rectwinn);
        sfClock_restart(sprite->winn->cwinn);
    }
    sfSprite_setPosition(sprite->winn->wwinn,
    sprite->winn->vwinn);
}