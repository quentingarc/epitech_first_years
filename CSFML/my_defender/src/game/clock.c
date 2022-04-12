/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** clock.c
*/

#include "my.h"

void move(sprite_t *sprite)
{
    if (sprite->monster->vmonster.x < 325 ||
    sprite->monster->vmonster.y < 260 ||
        (sprite->monster->vmonster.x > 670 &&
        sprite->monster->vmonster.y > 560))
        sprite->monster->vmonster.x += 7;
    if (sprite->monster->vmonster.x > 324 &&
    sprite->monster->vmonster.y > 240 &&
        sprite->monster->vmonster.x < 400)
        sprite->monster->vmonster.y -= 7;
    if (sprite->monster->vmonster.x > 670 &&
    sprite->monster->vmonster.y < 700 &&
        sprite->monster->vmonster.y < 560)
        sprite->monster->vmonster.y += 7;
    if (sprite->monster->vmonster.x > 970)
    {
        sprite->monster->vmonster.x = -70;
        sprite->monster->vmonster.y = 390;
    }
    sfSprite_setPosition(sprite->monster->mmonster, sprite->monster->vmonster);
}

void move_bis(sprite_t *sprite)
{
    if (sprite->monster->vmonster2.x < 325 ||
    sprite->monster->vmonster2.y < 260 ||
        (sprite->monster->vmonster2.x > 670 &&
        sprite->monster->vmonster2.y > 560))
        sprite->monster->vmonster2.x += 7;
    if (sprite->monster->vmonster2.x > 324 &&
    sprite->monster->vmonster2.y > 240 &&
        sprite->monster->vmonster2.x < 400)
        sprite->monster->vmonster2.y -= 7;
    if (sprite->monster->vmonster2.x > 670 &&
    sprite->monster->vmonster2.y < 700 &&
        sprite->monster->vmonster2.y < 560)
        sprite->monster->vmonster2.y += 7;
    if (sprite->monster->vmonster2.x > 970)
    {
        sprite->monster->vmonster2.x = 0;
        sprite->monster->vmonster2.y = 390;
    }
    sfSprite_setPosition(sprite->monster->mmonster2,
    sprite->monster->vmonster2);
}

