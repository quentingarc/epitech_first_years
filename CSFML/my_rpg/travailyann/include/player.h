/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** 15/04/2020
*/

#ifndef MONRPGAMOI_PLAYER_H
#define MONRPGAMOI_PLAYER_H

#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <SFML/Audio.h>
#include <stddef.h>
#include <stdlib.h>
#include "framebuffer.h"

typedef struct player_s
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    int life;
    my_sprite_t *heart;
    int state;
    sfClock *loop;
    sfClock *regen;
} player_t;

void player_regen(player_t *player);
void animate_player(player_t *player, my_rpg *game);
my_sprite_t *init_heart(void);
void moove_view_and_player(my_rpg *game, int x, int y);
player_t *init_player(void);
player_t *animate_idle_player(player_t *player);
player_t *animate_run_player(player_t *player);
void moove_player(my_rpg *);

#endif //MONRPGAMOI_PLAYER_H
