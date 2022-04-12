/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_settings
*/

#include "my.h"

settings_t *init_struct_settings(sprite_t *sprite)
{
    settings_t *settings = malloc(sizeof(pnj_t));

    if (!settings || !sprite)
        return NULL;
    sprite->settings->settings_texture = sfTexture_createFromFile(
    "img/settings.jpg", NULL);
    sprite->settings->settings_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->settings->settings_sprite,
    sprite->settings->settings_texture, sfFalse);
    sprite->settings->settings_vector.x = 0;
    sprite->settings->settings_vector.y = 0;
    sfSprite_setPosition(sprite->settings->settings_sprite,
    sprite->settings->settings_vector);
    return settings;
}

void exi(sprite_t *sprite)
{
    sprite->settings->exit_settings_texture_bis = sfTexture_createFromFile(
    "img/quit2.png", NULL);
    sprite->settings->exit_settings_sprite_bis = sfSprite_create();
    sfSprite_setTexture(sprite->settings->exit_settings_sprite_bis,
    sprite->settings->exit_settings_texture_bis, sfFalse);
    sprite->settings->exit_settings_vector_bis.x = 700;
    sprite->settings->exit_settings_vector_bis.y = 500;
    sfSprite_setPosition(sprite->settings->exit_settings_sprite_bis,
    sprite->settings->exit_settings_vector_bis);
}

settings_t *init_struct_settings_exit(sprite_t *sprite)
{
    settings_t *settings = malloc(sizeof(pnj_t));

    if (!sprite)
        return NULL;
    sprite->settings->exit_settings_texture = sfTexture_createFromFile(
    "img/quit1.png", NULL);
    sprite->settings->exit_settings_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->settings->exit_settings_sprite,
    sprite->settings->exit_settings_texture, sfFalse);
    sprite->settings->exit_settings_vector.x = 700;
    sprite->settings->exit_settings_vector.y = 500;
    sfSprite_setPosition(sprite->settings->exit_settings_sprite,
    sprite->settings->exit_settings_vector);
    exi(sprite);
    return settings;
}