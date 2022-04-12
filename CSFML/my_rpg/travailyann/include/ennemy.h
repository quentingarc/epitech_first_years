/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** 15/04/2020
*/

#ifndef MONRPGAMOI_ENNEMY_H
#define MONRPGAMOI_ENNEMY_H

#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <SFML/Audio.h>
#include <stddef.h>
#include <stdlib.h>
#include "framebuffer.h"

typedef struct ennemy_s
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f dir;
    sfIntRect rect;
    int state;
    sfClock *loop;
} ennemy_t;

ennemy_t *animate_big_ennemy(ennemy_t *ennemy);
ennemy_t *init_big_ennemy(int n, sfVector2f start_pos);
void moove_ennemy(ennemy_t *ennemy, my_rpg *, int speed);
ennemy_t *animate_ennemy(ennemy_t *ennemy);
ennemy_t *init_ennemy(int n, sfVector2f start_pos);
#endif //MONRPGAMOI_ENNEMY_H
