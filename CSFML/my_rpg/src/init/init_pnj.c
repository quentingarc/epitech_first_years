/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_pnj
*/

#include "my.h"

pnj_t *init_struct_pnj(sprite_t *sprite)
{
    pnj_t *pnj = malloc(sizeof(pnj_t));

    if (!pnj || !sprite)
        return NULL;

    sprite->pnj->pnj_texture = sfTexture_createFromFile("img/pnj.png", NULL);
    sprite->pnj->pnj_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->pnj->pnj_sprite,
    sprite->pnj->pnj_texture, sfFalse);
    sprite->pnj->pnj_vector.x = 600;
    sprite->pnj->pnj_vector.y = 440;
    sfSprite_setPosition(sprite->pnj->pnj_sprite, sprite->pnj->pnj_vector);
    return pnj;
}