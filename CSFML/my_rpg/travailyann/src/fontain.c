/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** 18/11/2019
*/

#include "ennemy.h"
#include "framebuffer.h"

ennemy_t *init_fontain(int n, sfVector2f start_pos)
{
    ennemy_t *fontain = malloc(sizeof*(fontain));

    fontain->pos.x = start_pos.x;
    fontain->pos.y = start_pos.y;
    fontain->rect = init_rec(64, 16+32*n, 16, 32);
    fontain->loop = sfClock_create();
    fontain->texture =
    sfTexture_createFromFile("travailyann/sprite/0x72_DungeonTilesetII_v1.3.png"
    , NULL);
    fontain->sprite = sfSprite_create();
    sfSprite_setTexture(fontain->sprite, fontain->texture, sfFalse);
    return (fontain);
}

ennemy_t **init_all_fontains(void)
{
    ennemy_t **ennemies = NULL;

    if (!(ennemies = malloc(sizeof*(ennemies) * 12))) {
        return (NULL);
    }
    ennemies[0] = init_fontain(0, (sfVector2f){80, 48});
    ennemies[1] = init_fontain(1, (sfVector2f){192, 48});
    ennemies[2] = init_fontain(0, (sfVector2f){128, 48});
    ennemies[3] = init_fontain(1, (sfVector2f){240, 48});
    ennemies[4] = init_fontain(1, (sfVector2f){560, 48});
    ennemies[5] = init_fontain(1, (sfVector2f){576, 48});
    ennemies[6] = init_fontain(1, (sfVector2f){592, 48});
    ennemies[7] = init_fontain(1, (sfVector2f){608, 48});
    ennemies[8] = init_fontain(0, (sfVector2f){560, 16});
    ennemies[9] = init_fontain(0, (sfVector2f){576, 16});
    ennemies[10] = init_fontain(0, (sfVector2f){592, 16});
    ennemies[11] = init_fontain(0, (sfVector2f){608, 16});
    return (ennemies);
}

void animate_fontain(ennemy_t *fontain)
{
    sfTime time = sfClock_getElapsedTime(fontain->loop);
    float seconds = sfTime_asSeconds(time);

    if (seconds > 0.2) {
        fontain->rect.left += 16;
        sfClock_restart(fontain->loop);
    }
    if (fontain->rect.left >= 96) {
        fontain->rect.left = 64;
    }
    sfSprite_setTextureRect(fontain->sprite, fontain->rect);
}

void allbis_fontains(my_rpg *game, ennemy_t **fontains)
{
    animate_fontain(fontains[6]);
    sfSprite_setPosition(fontains[6]->sprite, fontains[6]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[6]->sprite, sfFalse);
    animate_fontain(fontains[7]);
    sfSprite_setPosition(fontains[7]->sprite, fontains[7]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[7]->sprite, sfFalse);
    animate_fontain(fontains[8]);
    sfSprite_setPosition(fontains[8]->sprite, fontains[8]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[8]->sprite, sfFalse);
    animate_fontain(fontains[9]);
    sfSprite_setPosition(fontains[9]->sprite, fontains[9]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[9]->sprite, sfFalse);
    animate_fontain(fontains[10]);
    sfSprite_setPosition(fontains[10]->sprite, fontains[10]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[10]->sprite, sfFalse);
    animate_fontain(fontains[11]);
    sfSprite_setPosition(fontains[11]->sprite, fontains[11]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[11]->sprite, sfFalse);
}

void all_fontains(my_rpg *game, ennemy_t **fontains)
{
    animate_fontain(fontains[0]);
    sfSprite_setPosition(fontains[0]->sprite, fontains[0]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[0]->sprite, sfFalse);
    animate_fontain(fontains[1]);
    sfSprite_setPosition(fontains[1]->sprite, fontains[1]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[1]->sprite, sfFalse);
    animate_fontain(fontains[2]);
    sfSprite_setPosition(fontains[2]->sprite, fontains[2]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[2]->sprite, sfFalse);
    animate_fontain(fontains[3]);
    sfSprite_setPosition(fontains[3]->sprite, fontains[3]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[3]->sprite, sfFalse);
    animate_fontain(fontains[4]);
    sfSprite_setPosition(fontains[4]->sprite, fontains[4]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[4]->sprite, sfFalse);
    animate_fontain(fontains[5]);
    sfSprite_setPosition(fontains[5]->sprite, fontains[5]->pos);
    sfRenderWindow_drawSprite(game->window, fontains[5]->sprite, sfFalse);
    allbis_fontains(game, fontains);
}