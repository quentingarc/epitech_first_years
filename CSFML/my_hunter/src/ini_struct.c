/*
** EPITECH PROJECT, 2019
** quentin
** File description:
** ini_struct.c
*/

#include "my.h"

flappy *int_sprite(char *str, int x, int y)
{
    flappy *fla = malloc(sizeof*(fla));
    fla->texture = sfTexture_createFromFile(str, NULL);
    fla->sprite2 = sfSprite_create();
    fla->position_flappy.x = x;
    fla->position_flappy.y = y;
    fla->speed = 0.3;
    sfSprite_setTexture(fla->sprite2, fla->texture, sfTrue);
    return (fla);
}