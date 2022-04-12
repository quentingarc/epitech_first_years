/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_player.c
*/

#include "my.h"

player1_t *init_struct_player(sprite_t *sprite)
{
    player1_t *player = malloc(sizeof(player1_t));

    if (!player || !sprite)
        return NULL;
    sprite->player->player_B = sfTexture_createFromFile("img/batard.png", NULL);
    sprite->player->mplayer_B = sfSprite_create();
    sfSprite_setTexture(sprite->player->mplayer_B,
    sprite->player->player_B, sfFalse);
    sprite->player->vplayer_B.x = 333;
    sprite->player->vplayer_B.y = 513;
    sfSprite_setPosition(sprite->player->mplayer_B, sprite->player->vplayer_B);
    sprite->player->scdB;
    sprite->player->rectplayer_B.height = 40;
    sprite->player->rectplayer_B.left = 0;
    sprite->player->rectplayer_B.top = 0;
    sprite->player->rectplayer_B.width = 32;
    sfSprite_setTextureRect(sprite->player->mplayer_B,
    sprite->player->rectplayer_B);
    sprite->player->cplayer_B = sfClock_create();
    return player;
}