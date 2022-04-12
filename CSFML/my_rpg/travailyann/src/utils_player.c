/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** 18/11/2019
*/

#include "player.h"
#include "map.h"
#include "framebuffer.h"

my_sprite_t *init_heart(void)
{
    my_sprite_t *sprite = NULL;

    if (!(sprite = malloc(sizeof*(sprite)))) {
        return (NULL);
    }
    sprite->pos.x = 140;
    sprite->pos.y = 140;
    sprite->texture =
    sfTexture_createFromFile("travailyann/sprite/Heart.png", NULL);
    sprite->sprite = sfSprite_create();
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfFalse);
    return (sprite);
}

void moove_view_and_player(my_rpg *game, int x, int y)
{
    sfClock_restart(game->clock);

    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        x *= 2;
        y *= 2;
    }
    sfView_move(game->view, (sfVector2f){x, y});
    game->player->state = 1;
    game->player->pos.x += x;
    game->player->pos.y += y;
    game->player->heart->pos.x += x;
    game->player->heart->pos.y += y;
}

player_t *animate_idle_player(player_t *player)
{
    sfTime time = sfClock_getElapsedTime(player->loop);
    float seconde = sfTime_asSeconds(time);

    player->rect.top = 0;
    if (seconde > 0.3) {
        player->rect.left += 34.4;
        sfClock_restart(player->loop);
    }
    if (player->rect.left >= 310) {
        player->rect.left = 0;
    }
    sfSprite_setTextureRect(player->sprite, player->rect);
    return (player);
}

player_t *animate_run_player(player_t *player)
{
    sfTime time = sfClock_getElapsedTime(player->loop);
    float seconds = sfTime_asSeconds(time);

    player->rect.top = (sfKeyboard_isKeyPressed(sfKeyZ) ? 114.6 : player->rect.top);
    player->rect.top = (sfKeyboard_isKeyPressed(sfKeyS) ? 38.2 : player->rect.top);
    player->rect.top = (sfKeyboard_isKeyPressed(sfKeyQ) ? 76.4 : player->rect.top);
    player->rect.top = (sfKeyboard_isKeyPressed(sfKeyD) ? 152.8 : player->rect.top);
    if (seconds > 0.1) {
        player->rect.left += 34.4;
        sfClock_restart(player->loop);
    }
    if (player->rect.left >= 310) {
        player->rect.left = 0;
    }
    sfSprite_setTextureRect(player->sprite, player->rect);
    return (player);
}

void animate_player(player_t *player, my_rpg *game)
{
    sfTime time = sfClock_getElapsedTime(game->clock);
    float seconds = sfTime_asSeconds(time);

    player_regen(player);
    if (seconds > 0.4) {
        player->state = 0;
    }
    if (player->state == 0) {
        animate_idle_player(player);
    } else if (player->state == 1) {
        animate_run_player(player);
    }
}