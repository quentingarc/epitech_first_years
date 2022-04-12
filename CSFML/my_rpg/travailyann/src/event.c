/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** 17/03/2020
*/

#include "framebuffer.h"

void my_events(my_rpg *game)
{
    if (game->state == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyR)) {
            game->player->pos.x = 56;
            game->player->pos.y = 56;
            game->state = 1;
        }
    }
    close_window(game);
    moove_player(game);
}