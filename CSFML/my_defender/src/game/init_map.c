/*
** EPITECH PROJECT, 2019
** defender
** File description:
** ini_struct_bis.c
*/

#include "my.h"

map_t *init_struct_map(sprite_t *sprite)
{
    map_t *map = malloc(sizeof(map_t));

    if (!map || !sprite)
        return NULL;

    sprite->map->map = sfTexture_createFromFile("img/map.png", NULL);
    sprite->map->mmap = sfSprite_create();
    sfSprite_setTexture(sprite->map->mmap, sprite->map->map, sfFalse);
    sprite->map->vmap.x = 0;
    sprite->map->vmap.y = 0;
    sfSprite_setPosition(sprite->map->mmap, sprite->map->vmap);
    return map;
}