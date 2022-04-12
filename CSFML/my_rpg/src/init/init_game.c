/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_game.c
*/

#include "my.h"

void mapb(sprite_t *sprite)
{
    sprite->map->rectmap1.height = 830;
    sprite->map->rectmap1.left = 0;
    sprite->map->rectmap1.top = 0;
    sprite->map->rectmap1.width = 1082;
    sfSprite_setTexture(sprite->map->mmap1, sprite->map->map1, sfFalse);
    sfSprite_setTextureRect(sprite->map->mmap1, sprite->map->rectmap1);
    sprite->map->cmap1 = sfClock_create();
    sprite->map->imapx = 374;
    sprite->map->imapy = 548;
}

map1_t *init_struct_map(sprite_t *sprite)
{
    map1_t *map = malloc(sizeof(map1_t));

    if (!map || !sprite)
        return NULL;
    sprite->map->map1 = sfTexture_createFromFile("img/map.png", NULL);
    sprite->map->mmap1 = sfSprite_create();
     sprite->map->imap1 = sfImage_createFromFile("img/delimitation.png");
    sfSprite_setTexture(sprite->map->mmap1, sprite->map->map1, sfFalse);
    sprite->map->vmap1.x = 0;
    sprite->map->vmap1.y = 0;
    sfSprite_setPosition(sprite->map->mmap1, sprite->map->vmap1);
    sprite->map->scd1;
    mapb(sprite);
    return map;
}