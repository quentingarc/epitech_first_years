/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_mouse
*/

#include "my.h"

mouse_design_t *init_struct_mouse_design(sprite_t *sprite, mouse_t *first)
{
    mouse_design_t *mouse = malloc(sizeof(mouse_design_t));

    if (!mouse || !sprite)
        return NULL;

    sprite->mouse->mouse_texture = sfTexture_createFromFile("img/mouse.png",
    NULL);
    sprite->mouse->mouse_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->mouse->mouse_sprite,
    sprite->mouse->mouse_texture, sfFalse);
    sprite->mouse->clock = sfClock_create();
    sprite->mouse->intrect.height = 61;
    sprite->mouse->intrect.width = 66;
    sprite->mouse->intrect.left = 0;
    sprite->mouse->intrect.top = 0;
    sfSprite_setTextureRect(sprite->mouse->mouse_sprite,
    sprite->mouse->intrect);
    return mouse;
}

void mouse_animation(sprite_t *sprite, windowpause_t *win, mouse_t *mouse)
{
    sprite->mouse->mouse_vector.x = mouse->mouse.x - 30;
    sprite->mouse->mouse_vector.y = mouse->mouse.y - 23;
    sfSprite_setPosition(sprite->mouse->mouse_sprite,
    sprite->mouse->mouse_vector);
    sprite->mouse->time = sfClock_getElapsedTime(sprite->mouse->clock);
    sprite->mouse->seconds = sprite->mouse->time.microseconds / 1000000.0;
    if (sprite->mouse->seconds > 0.10) {
        sprite->mouse->intrect.left += 66;
        if (sprite->mouse->intrect.left == 264)
            sprite->mouse->intrect.left = 0;
        sfSprite_setTextureRect(sprite->mouse->mouse_sprite,
        sprite->mouse->intrect);
        sfClock_restart(sprite->mouse->clock);
    }
}