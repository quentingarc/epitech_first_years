/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** player_movements_bis.c
*/

#include "my.h"

void move_right_bis(sprite_t *sprite, windowpause_t *window)
{
    sprite->map->imapx += 0.5;
    sprite->particles->particles_vector.x =
    sprite->player->vplayer_B.x - 10;
    sprite->particles->particles_vector.y =
    sprite->player->vplayer_B.y + 25;
    sprite->player->vplayer_B.x = sprite->player->vplayer_B.x + 0.5;
}

void move_left_bis(sprite_t *sprite, windowpause_t *window)
{
    sprite->map->imapx -= 0.5;
    sprite->particles->particles_vector.x =
    sprite->player->vplayer_B.x + 34;
    sprite->particles->particles_vector.y =
    sprite->player->vplayer_B.y + 25;
    sprite->player->vplayer_B.x = sprite->player->vplayer_B.x - 0.5;
}

void move_up_bis(sprite_t *sprite, windowpause_t *window)
{
    sprite->map->imapy -= 0.5;
    sprite->particles->particles_vector.x =
    sprite->player->vplayer_B.x + 10;
    sprite->particles->particles_vector.y =
    sprite->player->vplayer_B.y + 35;
    sprite->player->vplayer_B.y = sprite->player->vplayer_B.y - 0.5;
}

void move_down_bis(sprite_t *sprite, windowpause_t *window)
{
    sprite->map->imapy += 0.5;
    sprite->particles->particles_vector.x =
    sprite->player->vplayer_B.x + 10;
    sprite->particles->particles_vector.y =
    sprite->player->vplayer_B.y - 9;
    sprite->map->vmap1.y = sprite->map->vmap1.y - 0.5;
}