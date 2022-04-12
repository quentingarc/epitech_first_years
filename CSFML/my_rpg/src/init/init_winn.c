/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_winn.c
*/

#include "my.h"

winn_t *init_struct_winn(sprite_t *sprite)
{
     winn_t *winn = malloc(sizeof(winn_t));

    if (!winn || !sprite)
        return NULL;
    sprite->winn->winn = sfTexture_createFromFile("img/WINNER.png", NULL);
    sprite->winn->wwinn = sfSprite_create();
    sfSprite_setTexture(sprite->winn->wwinn, sprite->winn->winn, sfFalse);
    sprite->winn->vwinn.x = 0;
    sprite->winn->vwinn.y = 0;
    sfSprite_setPosition(sprite->winn->wwinn, sprite->winn->vwinn);
    sprite->winn->scd;
    sprite->winn->rectwinn.height = 288;
    sprite->winn->rectwinn.left = 0;
    sprite->winn->rectwinn.top = 0;
    sprite->winn->rectwinn.width = 400;
    sfSprite_setTextureRect(sprite->winn->wwinn, sprite->winn->rectwinn);
    sprite->winn->cwinn = sfClock_create();
    return winn;
}