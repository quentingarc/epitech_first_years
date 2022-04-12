/*
** EPITECH PROJECT, 2019
** quentin
** File description:
** ini_struct.c
*/

#include "my.h"

game_t *init_struct(int x, int y)
{
    game_t *game = malloc(sizeof(game_t));
    game->land = malloc(sizeof(land_t));
    game->build = malloc(sizeof(build_t));
    game->texture = sfTexture_createFromFile("images/doodle2.png", NULL);
    game->sprite = sfSprite_create();
    game->pos_doodle.x = 80;
    game->pos_doodle.y = 0;
    sfSprite_setTexture(game->sprite, game->texture, sfTrue);
    game->land->sand = sfTexture_createFromFile("images/sand.png", NULL);
    game->land->ssand = sfSprite_create();
    game->land->vsand.x = 0;
    game->land->vsand.y = 0;
    sfSprite_setTexture(game->land->ssand, game->land->sand, sfTrue);
    game->land->sky = sfTexture_createFromFile("images/sky.png", NULL);
    game->land->ssky = sfSprite_create();
    init_struct_bis(x, y, game);
    init_struct_tiers(x, y, game);
    init_struct_quatiers(x, y, game);
    return (game);
}

game_t *init_struct_bis(int x, int y, game_t *game)
{
    sfSprite_setTexture(game->land->ssky, game->land->sky, sfTrue);
    game->land->sun = sfTexture_createFromFile("images/sun.png", NULL);
    game->land->ssun = sfSprite_create();
    game->land->vsun.x = 0;
    game->land->vsun.y = 0;
    sfSprite_setTexture(game->land->ssun, game->land->sun, sfTrue);
    game->land->tree = sfTexture_createFromFile("images/tree.png", NULL);
    game->land->stree = sfSprite_create();
    game->land->vtree.x = 0;
    game->land->vtree.y = 0;
    return (game);
}

game_t *init_struct_quatiers(int x, int y, game_t *game)
{
    sfSprite_setTexture(game->land->stree, game->land->tree, sfTrue);
    game->build->b1 = sfTexture_createFromFile("images/building1.png", NULL);
    game->build->sb1 = sfSprite_create();
    game->build->vb1.x = 0;
    game->build->vb1.y = 0;
    sfSprite_setTexture(game->build->sb1, game->build->b1, sfTrue);
    game->build->b2 = sfTexture_createFromFile("images/building2.png", NULL);
    game->build->sb2 = sfSprite_create();
    game->build->vb2.x = 0;
    game->build->vb2.y = 0;
    return (game);
}

game_t *init_struct_tiers(int x, int y, game_t *game)
{
    sfSprite_setTexture(game->build->sb2, game->build->b2, sfTrue);
    game->build->b3 = sfTexture_createFromFile("images/building3.png", NULL);
    game->build->sb3 = sfSprite_create();
    game->build->vb3.x = 0;
    game->build->vb3.y = 0;
    sfSprite_setTexture(game->build->sb3, game->build->b3, sfTrue);
    game->build->b4 = sfTexture_createFromFile("images/building4.png", NULL);
    game->build->sb4 = sfSprite_create();
    game->build->vb4.x = 0;
    game->build->vb4.y = 0;
    sfSprite_setTexture(game->build->sb4, game->build->b4, sfTrue);
    game->texture2 = sfTexture_createFromFile("images/doodle.png", NULL);
    game->sprite2 = sfSprite_create();
    sfSprite_setTexture(game->sprite2, game->texture2, sfTrue);
    game->music = sfMusic_createFromFile(("music/Dofus.ogg"));
    return (game);
}