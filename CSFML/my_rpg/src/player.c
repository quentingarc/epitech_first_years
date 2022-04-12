/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** player.c
*/

#include "my.h"

void my_clock_player(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button)
{
    sprite->player->timeplayer_B =
    sfClock_getElapsedTime(sprite->player->cplayer_B);
    sprite->player->scdB =
    sprite->player->timeplayer_B.microseconds / 1000000.0;
    sfRenderWindow_drawSprite(window->window, sprite->player->mplayer_B, NULL);
    if (sprite->player->scdB > 0.15) {
        sprite->player->rectplayer_B.left += 35;
    if (sprite->player->rectplayer_B.left == 350)
        sprite->player->rectplayer_B.left = 0;
        sfSprite_setTextureRect(sprite->player->mplayer_B,
        sprite->player->rectplayer_B);
        sfClock_restart(sprite->player->cplayer_B);
    }
}