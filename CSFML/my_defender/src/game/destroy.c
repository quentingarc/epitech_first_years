/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** destroy.c
*/

#include "my.h"

void destroy(sprite_t *sprite)
{
    sfSprite_destroy(sprite->exit->eexit_bis);
    sfSprite_destroy(sprite->play->pplay);
    sfSprite_destroy(sprite->play->pplay_bis);
}

void destroygame(sprite_t *sprite)
{
    sfSprite_destroy(sprite->pause->ppause);
    sfSprite_destroy(sprite->map->mmap);
    sfSprite_destroy(sprite->monster->mmonster);
    sfSprite_destroy(sprite->monster->mmonster2);
    sfSprite_destroy(sprite->pause->mmenu);
    sfSprite_destroy(sprite->pause->qquit);
    sfSprite_destroy(sprite->play->pplay);
    sfMusic_destroy(sprite->music);
}