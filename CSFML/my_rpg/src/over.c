/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** over.c
*/

#include "my.h"

void my_clock_over(sprite_t *sprite, windowpause_t *window)
{
    sprite->over->timeover =
    sfClock_getElapsedTime(sprite->over->ccover);
    sprite->over->scd =
    sprite->over->timeover.microseconds / 1000000.0;
        sfRenderWindow_drawSprite(window->window,
        sprite->over->oover, NULL);
    if (sprite->over->scd > 0.15) {
        sprite->over->rectover.left += 274;
        if (sprite->over->rectover.left == 4658)
            sprite->over->rectover.left = 0;
        sfSprite_setTextureRect(sprite->over->oover,
        sprite->over->rectover);
        sfClock_restart(sprite->over->ccover);
    }
    sfSprite_setPosition(sprite->over->oover,
    sprite->over->vover);
}