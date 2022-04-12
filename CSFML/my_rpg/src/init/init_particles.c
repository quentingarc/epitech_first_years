/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_particles
*/

#include "my.h"

particles_t *init_struct_particles(sprite_t *sprite)
{
    particles_t *particles = malloc(sizeof(particles_t));

    if (!particles || !sprite)
        return NULL;

    sprite->particles->particles_texture =
    sfTexture_createFromFile("img/particle.png", NULL);
    sprite->particles->particles_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->particles->particles_sprite,
    sprite->particles->particles_texture, sfFalse);
    sprite->particles->clock = sfClock_create();
    sprite->particles->intrect.height = 30;
    sprite->particles->intrect.width = 10;
    sprite->particles->intrect.left = 0;
    sprite->particles->intrect.top = 0;
    sfSprite_setTextureRect(sprite->particles->particles_sprite,
    sprite->particles->intrect);
    return particles;
}

void particles_animation(sprite_t *sprite, windowpause_t *win)
{
    sfSprite_setPosition(sprite->particles->particles_sprite,
    sprite->particles->particles_vector);
    sprite->particles->time = sfClock_getElapsedTime(sprite->particles->clock);
    sprite->particles->seconds = sprite->particles->time.microseconds /
    1000000.0;
    if (sprite->particles->seconds > 0.15) {
        sprite->particles->intrect.left += 10;
        if (sprite->particles->intrect.left == 30)
            sprite->particles->intrect.left = 0;
        sfSprite_setTextureRect(sprite->particles->particles_sprite,
        sprite->particles->intrect);
        sfClock_restart(sprite->particles->clock);
    }
}