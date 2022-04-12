/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_over.c
*/

#include "my.h"

over_t *init_struct_over(sprite_t *sprite)
{
     over_t *over = malloc(sizeof(over_t));

    if (!over || !sprite)
        return NULL;
    sprite->over->over = sfTexture_createFromFile("img/GAMEOVER.png", NULL);
    sprite->over->oover = sfSprite_create();
    sfSprite_setTexture(sprite->over->oover, sprite->over->over, sfFalse);
    sprite->over->vover.x = 0;
    sprite->over->vover.y = 0;
    sfSprite_setPosition(sprite->over->oover, sprite->over->vover);
    sprite->over->scd;
    sprite->over->rectover.height = 227;
    sprite->over->rectover.left = 0;
    sprite->over->rectover.top = 0;
    sprite->over->rectover.width = 272;
    sfSprite_setTextureRect(sprite->over->oover, sprite->over->rectover);
    sprite->over->ccover = sfClock_create();
    return over;
}