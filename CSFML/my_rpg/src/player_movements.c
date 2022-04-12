/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** player_movements
*/

#include "my.h"

void move_right(sprite_t *sprite, windowpause_t *window)
{
    if (sprite->map->scd1 > 0.05) {
        sprite->map->colmap1 = sfImage_getPixel(sprite->map->imap1,
        sprite->map->imapx + 20, sprite->map->imapy);
        if (sprite->map->colmap1.r != 255) {
            if (sprite->player->vplayer_B.x <= 928)
                move_right_bis(sprite, window);
            if (sprite->map->vmap1.x >= -124) {
                sprite->monstre->vmonstre.x = sprite->monstre->vmonstre.x - 0.5;
                sprite->pnj->pnj_vector.x = sprite->pnj->pnj_vector.x - 0.5;
                sprite->map->imapx += 0.5;
                sprite->map->vmap1.x = sprite->map->vmap1.x - 0.5;
            }
            sprite->player->rectplayer_B.top = 155;
        }
    }
}

void move_left(sprite_t *sprite, windowpause_t *window)
{
    if (sprite->map->scd1 > 0.05) {
        sprite->map->colmap1 = sfImage_getPixel(sprite->map->imap1,
        sprite->map->imapx - 20, sprite->map->imapy);
        if (sprite->map->colmap1.r != 255) {
            if (sprite->player->vplayer_B.x >= - 6)
                move_left_bis(sprite, window);
            if (sprite->map->vmap1.x <= 0) {
                sprite->pnj->pnj_vector.x = sprite->pnj->pnj_vector.x + 0.5;
                sprite->monstre->vmonstre.x = sprite->monstre->vmonstre.x + 0.5;
                sprite->map->vmap1.x = sprite->map->vmap1.x + 0.5;
                sprite->map->imapx -= 0.5;
            }
            sprite->player->rectplayer_B.top = 78;
        }
    }
}

void move_up(sprite_t *sprite, windowpause_t *window)
{
    if (sprite->map->scd1 > 0.05) {
        sprite->map->colmap1 = sfImage_getPixel(sprite->map->imap1,
        sprite->map->imapx, sprite->map->imapy - 20);
        if (sprite->map->colmap1.r != 255) {
            if (sprite->player->vplayer_B.y >= 0)
                move_up_bis(sprite, window);
            if (sprite->map->vmap1.y <= 0) {
                sprite->pnj->pnj_vector.y = sprite->pnj->pnj_vector.y + 0.5;
                sprite->monstre->vmonstre.y = sprite->monstre->vmonstre.y + 0.5;
                sprite->map->imapy -= 0.5;
                sprite->map->vmap1.y = sprite->map->vmap1.y + 0.5;
            }
            sprite->player->rectplayer_B.top = 115;
        }
    }
}

void move_down(sprite_t *sprite, windowpause_t *window)
{
    if (sprite->map->scd1 > 0.05) {
        sprite->map->colmap1 = sfImage_getPixel(sprite->map->imap1,
        sprite->map->imapx, sprite->map->imapy + 20);
        if (sprite->map->colmap1.r != 255) {
            if (sprite->map->vmap1.y >= -182)
                move_down_bis(sprite, window);
            if (sprite->player->vplayer_B.y <= 606) {
                sprite->player->vplayer_B.y = sprite->player->vplayer_B.y + 0.5;
                sprite->monstre->vmonstre.y = sprite->monstre->vmonstre.y - 0.5;
                sprite->pnj->pnj_vector.y = sprite->pnj->pnj_vector.y - 0.5;
                sprite->map->imapy += 0.5;
            }
            sprite->player->rectplayer_B.top = 40;
        }
    }
}