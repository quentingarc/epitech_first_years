/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_monster.c
*/

#include "my.h"

monster_t *init_struct_monster(sprite_t *sprite)
{
    monster_t *monster = malloc(sizeof(monster_t));
    if (!monster || !sprite)
        return NULL;

    create_monster(sprite);
    sprite->monster->monster2 =
    sfTexture_createFromFile("img/monstre1.png", NULL);
    sprite->monster->mmonster2 = sfSprite_create();
    sprite->monster->vmonster2.x = 0;
    sprite->monster->vmonster2.y = 390;
    monsterp(sprite);
    sfSprite_setTexture(sprite->monster->mmonster2, sprite->monster->monster2,
    sfFalse);
    sfSprite_setTextureRect(sprite->monster->mmonster2,
    sprite->monster->rectmonster2);
    sprite->monster->cmonster2 = sfClock_create();
}

void *monsterp(sprite_t *sprite)
{
    sfSprite_setPosition(sprite->monster->mmonster2,
    sprite->monster->vmonster2);
    sprite->monster->scd2;
    sprite->monster->rectmonster2.height = 35;
    sprite->monster->rectmonster2.left = 0;
    sprite->monster->rectmonster2.top = 0;
    sprite->monster->rectmonster2.width = 39;
}