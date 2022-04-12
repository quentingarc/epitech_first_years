/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_inventory
*/

#include "my.h"

inventory_t *init_struct_inventory(sprite_t *sprite)
{
    inventory_t *inventory = malloc(sizeof(inventory_t));

    if (!inventory || !sprite)
        return NULL;

    sprite->inventory->inventory_texture =
    sfTexture_createFromFile("img/inventory.png", NULL);
    sprite->inventory->inventory_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->inventory->inventory_sprite,
    sprite->inventory->inventory_texture, sfFalse);
    sprite->inventory->inventory_vector.x = 380;
    sprite->inventory->inventory_vector.y = 150;
    sfSprite_setPosition(sprite->inventory->inventory_sprite,
    sprite->inventory->inventory_vector);
    return inventory;
}