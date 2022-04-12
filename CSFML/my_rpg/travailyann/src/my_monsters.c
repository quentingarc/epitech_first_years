/*
** EPITECH PROJECT, 2019
** yeah
** File description:
** 18/11/2019
*/

#include "ennemy.h"
#include "framebuffer.h"
#include <stdlib.h>

ennemy_t **init_doom_room(void)
{
    ennemy_t **ennemies = NULL;

    if (!(ennemies = malloc(sizeof*(ennemies) * 7))) {
        return (NULL);
    }
    ennemies[0] = init_ennemy(0, (sfVector2f){316, 276});
    ennemies[1] = init_big_ennemy(0, (sfVector2f){348, 256});
    ennemies[2] = init_ennemy(1, (sfVector2f){376, 276});
    ennemies[3] = init_big_ennemy(1, (sfVector2f){456, 256});
    ennemies[4] = init_ennemy(2, (sfVector2f){492, 276});
    ennemies[5] = init_big_ennemy(2, (sfVector2f){292, 256});
    ennemies[6] = NULL;
    return (ennemies);
}

int aggro_player(my_rpg *game)
{
    static int aggro = 0;

    if ((game->player->pos.x >= 404 && game->player->pos.x <= 452)
    && (game->player->pos.y >= 220 && game->player->pos.y <= 252)) {
        aggro = 1;
    }
    if ((game->player->pos.x >= 404 && game->player->pos.x <= 452)
    && (game->player->pos.y >= 220 && game->player->pos.y <= 252)) {
        aggro = 1;
    }
    return (aggro);
}

void moove_ennemies(ennemy_t **ennemies, my_rpg *game)
{
    moove_ennemy(ennemies[0], game, 4);
    moove_ennemy(ennemies[1], game, 4);
    moove_ennemy(ennemies[2], game, 4);
    moove_ennemy(ennemies[3], game, 4);
    moove_ennemy(ennemies[4], game, 4);
    moove_ennemy(ennemies[5], game, 4);
}

void doom_room(my_rpg *game, ennemy_t **ennemies)
{
    animate_ennemy(ennemies[0]);
    animate_ennemy(ennemies[2]);
    animate_ennemy(ennemies[4]);
    animate_big_ennemy(ennemies[1]);
    animate_big_ennemy(ennemies[3]);
    animate_big_ennemy(ennemies[5]);
    sfSprite_setPosition(ennemies[0]->sprite, ennemies[0]->pos);
    sfSprite_setPosition(ennemies[1]->sprite, ennemies[1]->pos);
    sfSprite_setPosition(ennemies[2]->sprite, ennemies[2]->pos);
    sfSprite_setPosition(ennemies[3]->sprite, ennemies[3]->pos);
    sfSprite_setPosition(ennemies[4]->sprite, ennemies[4]->pos);
    sfSprite_setPosition(ennemies[5]->sprite, ennemies[5]->pos);
    sfRenderWindow_drawSprite(game->window, ennemies[0]->sprite, sfFalse);
    sfRenderWindow_drawSprite(game->window, ennemies[1]->sprite, sfFalse);
    sfRenderWindow_drawSprite(game->window, ennemies[2]->sprite, sfFalse);
    sfRenderWindow_drawSprite(game->window, ennemies[3]->sprite, sfFalse);
    sfRenderWindow_drawSprite(game->window, ennemies[4]->sprite, sfFalse);
    sfRenderWindow_drawSprite(game->window, ennemies[5]->sprite, sfFalse);
    if (aggro_player(game) == 1)
        moove_ennemies(ennemies, game);
}