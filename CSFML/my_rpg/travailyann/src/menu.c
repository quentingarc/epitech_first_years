/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** toolatetobedead
*/

#include "framebuffer.h"
#include "player.h"
#include "ennemy.h"
#include "map.h"
#include <stdlib.h>

void refresh_sprite(sfRenderWindow *window, my_sprite_t *my, sfVector2f speed)
{
    my = launch_parallax(my, speed);
    sfRenderWindow_drawSprite(window, my->sprite, sfFalse);
}

void game_refresh(my_rpg *game, ennemy_t **doom,
ennemy_t **fontains, ennemy_t **pnjs)
{
    sfRenderWindow_clear(game->window, sfBlack);
    sfSprite_setPosition(game->player->sprite, game->player->pos);
    sfSprite_setPosition(game->player->heart->sprite, game->player->heart->pos);
    animate_player(game->player, game);
    draw_map(game->window, game->map);
    if (game->player->life == 2) {
        sfRenderWindow_drawSprite(game->window,
        game->player->heart->sprite, sfFalse);
    }
    all_fontains(game, fontains);
    doom_room(game, doom);
    all_pnjs(pnjs, game);
    sfRenderWindow_drawSprite(game->window, game->player->sprite, sfFalse);
    sfRenderWindow_display(game->window);
    sfRenderWindow_setView(game->window, game->view);
}

int game_loop(my_rpg *game)
{
    ennemy_t **doom = init_doom_room();
    ennemy_t **fontains = init_all_fontains();
    ennemy_t **pnjs = init_all_pnjs();
    ennemy_t *ennemy = init_ennemy(0, (sfVector2f){112, 112});
    ennemy_t *ennemy2 = init_big_ennemy(1, (sfVector2f){156, 156});


    sfView_reset(game->view, (sfFloatRect){0, 0, 168, 168});
    while (sfRenderWindow_isOpen(game->window)) {
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            my_events(game);
        }
        game_refresh(game, doom, fontains, pnjs);
                if ((GETTILE == 6 && get_tile(game->map, game->player->pos.x
                - (TILE_SIZE / 2), game->player->pos.y) == 6)) {
                    sfRenderWindow_close(game->window);
                    return 1;
                }
    }
    sfRenderWindow_destroy(game->window);
    return 0;
}