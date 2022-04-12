/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** clock.c
*/

#include "my.h"

void my_clock(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button)
{
    sprite->map->timemap1 = sfClock_getElapsedTime(sprite->map->cmap1);
    sprite->map->scd1 = sprite->map->timemap1.microseconds / 1000000.0;
    sfRenderWindow_drawSprite(window->window, sprite->map->mmap1, NULL);
    if (sprite->map->scd1 > 0.15) {
        sprite->map->rectmap1.left += 1082;
        if (sprite->map->rectmap1.left == 3246)
            sprite->map->rectmap1.left = 0;
        sfSprite_setTextureRect(sprite->map->mmap1, sprite->map->rectmap1);
        sfClock_restart(sprite->map->cmap1);
    }
}

void my_clock_monster(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button)
{
    sprite->monstre->timemonstre =
    sfClock_getElapsedTime(sprite->monstre->cmonstre);
    sprite->monstre->scd =
    sprite->monstre->timemonstre.microseconds / 1000000.0;
        sfRenderWindow_drawSprite(window->window,
        sprite->monstre->mmonstre, NULL);
    if (sprite->monstre->scd > 0.15) {
        sprite->monstre->rectmonstre.left += 43;
        if (sprite->monstre->rectmonstre.left == 344)
            sprite->monstre->rectmonstre.left = 0;
        sprite->monstre->vmonstre.x += 1;
        sfSprite_setTextureRect(sprite->monstre->mmonstre,
        sprite->monstre->rectmonstre);
        sfClock_restart(sprite->monstre->cmonstre);
    }
    sfSprite_setPosition(sprite->monstre->mmonstre,
    sprite->monstre->vmonstre);
}

void draws(sprite_t *sprite, windowpause_t *window)
{
    sfRenderWindow_drawSprite(window->window,
        sprite->map->mmap1, NULL);
        sfRenderWindow_drawSprite(window->window,
        sprite->monstre->mmonstre, NULL);
        sfRenderWindow_drawSprite(window->window,
        sprite->player->mplayer_B, NULL);
        sfRenderWindow_drawSprite(window->window,
        sprite->pnj->pnj_sprite, NULL);
        sfRenderWindow_drawSprite(window->window,
        sprite->particles->particles_sprite, NULL);
}

void clocker(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button)
{
    my_clock(sprite, window, mouse, button);
    my_clock_monster(sprite, window, mouse, button);
    my_clock_player(sprite, window, mouse, button);
    particles_animation(sprite, window);
    plac_tower(mouse, window, button);
}
