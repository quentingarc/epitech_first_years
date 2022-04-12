/*
** EPITECH PROJECT, 2020
** my_world
** File description:
** 17/03/2020
*/

#include "framebuffer.h"

my_rpg *init_my_rpg(char **map, char **col)
{
    my_rpg *game = malloc(sizeof*(game));

    game->window = create_window();
    game->clock = sfClock_create();
    game->player = init_player();
    game->map = init_map(map, col);
    game->view = sfView_create();
    game->state = 1;
    sfRenderWindow_setView(game->window, game->view);
    return (game);
}