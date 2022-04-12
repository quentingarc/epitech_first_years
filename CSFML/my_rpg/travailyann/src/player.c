/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** 18/11/2019
*/

#include "player.h"
#include "map.h"
#include "framebuffer.h"

player_t *init_player(void)
{
    player_t *player = malloc(sizeof *(player));

    player->pos.x = 72;
    player->pos.y = 72;
    player->rect = init_rec(0, 0, 34.4, 38.2);
    player->loop = sfClock_create();
    player->regen = sfClock_create();
    player->life = 2;
    player->texture =
            sfTexture_createFromFile("img/batard.png"
                    , NULL);
    player->heart = init_heart();
    player->sprite = sfSprite_create();
    sfSprite_setTexture(player->sprite, player->texture, sfFalse);
    sfSprite_setScale(player->sprite, (sfVector2f){0.5, 0.5});
    return (player);
}

void player_regen(player_t *player)
{
    sfTime time = sfClock_getElapsedTime(player->regen);
    float seconds = sfTime_asSeconds(time);

    if (seconds > 10) {
        if (player->life != 2) {
            player->life++;
        }
        sfClock_restart(player->regen);
    }
}

void moove_player(my_rpg *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)
    && (GETTILE != 7 && get_tile(game->map, game->player->pos.x,
    game->player->pos.y - (TILE_SIZE / 2)) != 7)) {
        moove_view_and_player(game, 0, -4);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)
    && (GETTILE != 7 && get_tile(game->map, game->player->pos.x,
    game->player->pos.y + (TILE_SIZE / 2)) != 7)) {
        moove_view_and_player(game, 0, +4);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)
    && (GETTILE != 7 && get_tile(game->map, game->player->pos.x
    - (TILE_SIZE / 2), game->player->pos.y) != 7)) {
        moove_view_and_player(game, -4, 0);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)
    && (GETTILE != 7 && get_tile(game->map, game->player->pos.x
    + (TILE_SIZE / 2), game->player->pos.y) != 7)) {
        moove_view_and_player(game, +4, 0);
    }
}