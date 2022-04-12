/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** position.c
*/

#include "my.h"

int position(game_t *game)
{
    game->build->vb3.x = game->build->vb3.x - 0.1;
    if (game->build->vb3.x <= -1280)
        game->build->vb3.x = 0;
    sfSprite_setPosition(game->build->sb3, game->build->vb3);
    game->build->vb2.x = game->build->vb2.x - 0.15;
    if (game->build->vb2.x <= -1280)
        game->build->vb2.x = 0;
    sfSprite_setPosition(game->build->sb2, game->build->vb2);
    game->build->vb1.x = game->build->vb1.x - 0.2;
    if (game->build->vb1.x <= -1280)
        game->build->vb1.x = 0;
    sfSprite_setPosition(game->build->sb1, game->build->vb1);
    game->build->vb4.x = game->build->vb4.x - 0.3;
    if (game->build->vb4.x <= -1280)
        game->build->vb4.x = 0;
    sfSprite_setPosition(game->build->sb4, game->build->vb4);
    position_bis(game);
}

int position_bis(game_t *game)
{
    game->land->vsand.x = game->land->vsand.x - 0.7;
    if (game->land->vsand.x <= -1280)
        game->land->vsand.x = 0;
    sfSprite_setPosition(game->land->ssand, game->land->vsand);
    game->land->vtree.x = game->land->vtree.x - 0.4;
    if (game->land->vtree.x <= -1280)
        game->land->vtree.x = 0;
    sfSprite_setPosition(game->land->stree, game->land->vtree);
    game->land->vsun.x = game->land->vsun.x - 0.1;
    if (game->land->vsun.x <= -1280)
        game->land->vsun.x = 0;
    sfSprite_setPosition(game->land->ssun, game->land->vsun);

}