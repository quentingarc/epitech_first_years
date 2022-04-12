/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destroy_sprite.c
*/

#include "my.h"

void destroygame(sprite_t *sprite)
{
    sfSprite_destroy(sprite->map->mmap1);
    sfSprite_destroy(sprite->help->hhelp);
    sfSprite_destroy(sprite->help->hhelp_bis);
    sfSprite_destroy(sprite->exit->eexit);
    sfSprite_destroy(sprite->pause->buttonpause->bbplay);
    sfSprite_destroy(sprite->pause->buttonpause->bbquit);
    sfSprite_destroy(sprite->play->pplay_bis);
    sfSprite_destroy(sprite->pause->buttonpause->bbmenu);
    sfSprite_destroy(sprite->pause->ppause);
    sfSprite_destroy(sprite->play->pplay);
    sfSprite_destroy(sprite->exit->eexit_bis);
    sfSprite_destroy(sprite->menu->mmenu);
}