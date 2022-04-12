/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** rpg_bis.c
*/

#include "my.h"

int rpg_bis(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button)
{
    if (sprite->map->colmap1.g < 20 && sprite->map->colmap1.g > 10
    && sfKeyboard_isKeyPressed(sfKeyZ)) {
        sfRenderWindow_close(window->window);
        sfSprite_setPosition(sprite->player->mplayer_B,
        sprite->player->vplayer_B);
        return 4;
    }
    sfRenderWindow_display(window->window);
    sfRenderWindow_clear(window->window, sfBlack);
}

void move_bis(sprite_t *sprite, windowpause_t *window)
{
    if (sfKeyboard_isKeyPressed(sfKeyD))
        move_right(sprite, window);
    else if (!sfKeyboard_isKeyPressed(sfKeyS) || sfKeyboard_isKeyPressed(sfKeyQ)
    || !sfKeyboard_isKeyPressed(sfKeyD) ||  !sfKeyboard_isKeyPressed(sfKeyZ))
        sprite->player->rectplayer_B.top = 0;
}