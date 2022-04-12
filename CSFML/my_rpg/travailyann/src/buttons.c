/*
** EPITECH PROJECT, 2019
** MUL_my_world_2019
** File description:
** buttons.c
*/

#include "framebuffer.h"
#include <stdlib.h>

my_sprite_t *rotation_button(void)
{
    my_sprite_t *button = NULL;

    if (!(button = malloc(sizeof*(button)))) {
        return (NULL);
    }
    button->pos.x = 10;
    button->pos.y = 10;
    button->texture =
    sfTexture_createFromFile("travailyann/sprite/rotation_button.jpg", NULL);
    button->sprite = sfSprite_create();
    sfSprite_setTexture(button->sprite, button->texture, sfFalse);
    sfSprite_setScale(button->sprite, (sfVector2f){0.2, 0.2});
    return (button);
}

my_sprite_t *game_button(void)
{
    my_sprite_t *game_button = NULL;

    if (!(game_button = malloc(sizeof*(game_button)))) {
        return (NULL);
    }
    game_button->pos.x = 300;
    game_button->pos.y = 400;
    game_button->texture =
    sfTexture_createFromFile("sprite/game_button.png", NULL);
    game_button->sprite = sfSprite_create();
    sfSprite_setTexture(game_button->sprite, game_button->texture, sfFalse);
    sfSprite_setScale(game_button->sprite, (sfVector2f){0.5, 0.5});
    return (game_button);
}