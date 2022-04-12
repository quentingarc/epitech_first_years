/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** 18/11/2019
*/

#include "ennemy.h"
#include "framebuffer.h"

ennemy_t *init_pnj(int n, sfVector2f start_pos)
{
    ennemy_t *ennemy = malloc(sizeof *(ennemy));

    ennemy->pos.x = start_pos.x;
    ennemy->pos.y = start_pos.y;
    ennemy->rect = init_rec(128, 76+n*32, 16, 32);
    ennemy->loop = sfClock_create();
    ennemy->texture =
    sfTexture_createFromFile("travailyann/sprite/0x72_DungeonTilesetII_v1.3.png"
    , NULL);
    ennemy->sprite = sfSprite_create();
    sfSprite_setTexture(ennemy->sprite, ennemy->texture, sfFalse);
    return (ennemy);
}

ennemy_t **init_all_pnjs(void)
{
    ennemy_t **all = NULL;

    if (!(all = malloc(sizeof*(all) * 6))) {
        return (NULL);
    }
    all[0] = init_pnj(3, (sfVector2f){336, 128});
    all[1] = init_pnj(4, (sfVector2f){304, 176});
    all[2] = init_pnj(0, (sfVector2f){432, 88});
    all[3] = init_pnj(1, (sfVector2f){448, 72});
    all[4] = init_pnj(0, (sfVector2f){464, 88});
    all[5] = init_pnj(1, (sfVector2f){448, 104});
    return (all);
}

void animate_idle_pnj(ennemy_t *player)
{
    sfTime time = sfClock_getElapsedTime(player->loop);
    float seconde = sfTime_asSeconds(time);

    if (seconde > 0.1) {
        player->rect.left += 16;
        sfClock_restart(player->loop);
    }
    if (player->rect.left >= 192) {
        player->rect.left = 128;
    }
    sfSprite_setTextureRect(player->sprite, player->rect);
}

void animate_run_pnj(ennemy_t *player)
{
    sfTime time = sfClock_getElapsedTime(player->loop);
    float seconds = sfTime_asSeconds(time);

    if (seconds > 0.1) {
        player->rect.left += 16;
        sfClock_restart(player->loop);
    }
    if (player->rect.left >= 256) {
        player->rect.left = 192;
    }
    sfSprite_setTextureRect(player->sprite, player->rect);
}

void all_pnjs(ennemy_t **pnj, my_rpg *game)
{
    animate_idle_pnj(pnj[0]);
    animate_run_pnj(pnj[1]);
    moove_lizard(pnj[1], game);
    sfSprite_setPosition(pnj[0]->sprite, pnj[0]->pos);
    sfSprite_setPosition(pnj[1]->sprite, pnj[1]->pos);
    sfRenderWindow_drawSprite(game->window, pnj[0]->sprite, sfFalse);
    sfRenderWindow_drawSprite(game->window, pnj[1]->sprite, sfFalse);
    animate_idle_pnj(pnj[2]);
    sfSprite_setPosition(pnj[2]->sprite, pnj[2]->pos);
    sfRenderWindow_drawSprite(game->window, pnj[2]->sprite, sfFalse);
    animate_idle_pnj(pnj[3]);
    sfSprite_setPosition(pnj[3]->sprite, pnj[3]->pos);
    sfRenderWindow_drawSprite(game->window, pnj[3]->sprite, sfFalse);
    animate_idle_pnj(pnj[4]);
    sfSprite_setPosition(pnj[4]->sprite, pnj[4]->pos);
    sfRenderWindow_drawSprite(game->window, pnj[4]->sprite, sfFalse);
    animate_idle_pnj(pnj[5]);
    sfSprite_setPosition(pnj[5]->sprite, pnj[5]->pos);
    sfRenderWindow_drawSprite(game->window, pnj[5]->sprite, sfFalse);
}