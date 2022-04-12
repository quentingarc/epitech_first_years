/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** 18/11/2019
*/

#include "ennemy.h"
#include "map.h"
#include "framebuffer.h"

void moove_ennemy(ennemy_t *ennemy, my_rpg *game, int speed)
{
    sfTime time = sfClock_getElapsedTime(ennemy->loop);
    float seconds = sfTime_asSeconds(time);
    int dirvert = game->player->pos.x - ennemy->pos.x;
    int dirhor = game->player->pos.y - ennemy->pos.y;
    int x = (dirvert > 0 ? speed : -speed);
    int y = (dirhor > 0 ? speed : -speed);

    if (seconds > 0.07) {
        if ((dirvert <= 2 && dirvert >= -2)
        && (dirhor <= 2 && dirhor >= -2)) {
            ennemy->pos.x = 9000;
            ennemy->pos.y = 9000;
            game->player->life -= 1;
        } else if (get_tile(game->map, ennemy->pos.x, ennemy->pos.y) == 294) {
            ennemy->pos.x = 9000;
            ennemy->pos.y = 9000;
        }
        ennemy->pos.x += x;
        ennemy->pos.y += y;
    }
}

void moove_lizard(ennemy_t *lizard, my_rpg *game)
{
    sfTime time = sfClock_getElapsedTime(lizard->loop);
    float seconds = sfTime_asSeconds(time);

    if (seconds > 0.07) {
        lizard->pos.x += 2;
        if (get_tile(game->map, lizard->pos.x, lizard->pos.y) == 294) {
            lizard->pos.x = 304;
        }
    }
}