/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_monstre.c
*/

#include "my.h"

monstre_t *init_struct_monstre(sprite_t *sprite)
{
    monstre_t *monstre = malloc(sizeof(monstre_t));

    if (!monstre || !sprite)
        return NULL;
    sprite->monstre->monstre =
    sfTexture_createFromFile("img/monstre.png", NULL);
    sprite->monstre->mmonstre = sfSprite_create();
    sfSprite_setTexture(sprite->monstre->mmonstre,
    sprite->monstre->monstre, sfFalse);
    sprite->monstre->vmonstre.x = 200;
    sprite->monstre->vmonstre.y = 200;
    sprite->monstre->scd;
    sprite->monstre->rectmonstre.height = 47;
    sprite->monstre->rectmonstre.left = 0;
    sprite->monstre->rectmonstre.top = 0;
    sprite->monstre->rectmonstre.width = 43;
    sfSprite_setTextureRect(sprite->monstre->mmonstre,
    sprite->monstre->rectmonstre);
    sprite->monstre->cmonstre = sfClock_create();
    return monstre;
}