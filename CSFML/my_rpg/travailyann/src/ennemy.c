/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** 18/11/2019
*/

#include "ennemy.h"
#include "framebuffer.h"

ennemy_t *init_ennemy(int n, sfVector2f start_pos)
{
    ennemy_t *ennemy = malloc(sizeof *(ennemy));

    ennemy->pos.x = start_pos.x;
    ennemy->pos.y = start_pos.y;
    ennemy->rect = init_rec(432, 80+n*32, 16, 16);
    ennemy->loop = sfClock_create();
    ennemy->texture =
    sfTexture_createFromFile("travailyann/sprite/0x72_DungeonTilesetII_v1.3.png"
    , NULL);
    ennemy->sprite = sfSprite_create();
    sfSprite_setTexture(ennemy->sprite, ennemy->texture, sfFalse);
    return (ennemy);
}

ennemy_t *animate_ennemy(ennemy_t *ennemy)
{
    sfTime time = sfClock_getElapsedTime(ennemy->loop);
    float seconds = sfTime_asSeconds(time);

    if (seconds > 0.1) {
        ennemy->rect.left += 16;
        sfClock_restart(ennemy->loop);
    }
    if (ennemy->rect.left >= 496) {
        ennemy->rect.left = 432;
    }
    sfSprite_setTextureRect(ennemy->sprite, ennemy->rect);
    return (ennemy);
}