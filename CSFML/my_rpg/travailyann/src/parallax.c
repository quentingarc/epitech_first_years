/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** 18/11/2019
*/

#include <stdlib.h>
#include "../include/framebuffer.h"

void set_scale_parallax(float x, float y, my_sprite_t **my)
{
    sfVector2f scale;

    scale.x = x;
    scale.y = y;
    sfSprite_setScale(my[0]->sprite, scale);
    sfSprite_setScale(my[1]->sprite, scale);
    sfSprite_setScale(my[2]->sprite, scale);
    sfSprite_setScale(my[4]->sprite, scale);
    sfSprite_setScale(my[3]->sprite, scale);
    sfSprite_setScale(my[6]->sprite, scale);
    sfSprite_setScale(my[5]->sprite, scale);
}

my_sprite_t *launch_parallax(my_sprite_t *my, sfVector2f speed)
{
    sfTime time = sfClock_getElapsedTime(my->loop);
    float seconde = sfTime_asSeconds(time);

    if (seconde > speed.x) {
        my->rec.left += speed.y;
        sfClock_restart(my->loop);
    }
    sfSprite_setTextureRect(my->sprite, my->rec);
    return (my);
}

my_sprite_t *create_sprite_parallax(char *path, sfVector2f pos)
{
    my_sprite_t *my = malloc(sizeof*(my));

    my->texture = sfTexture_createFromFile(path, NULL);
    sfTexture_setRepeated(my->texture, sfTrue);
    my->sprite = sfSprite_create();
    my->pos = pos;
    my->rec = init_rec(0, 0, 1360, 860);
    my->loop = sfClock_create();
    sfSprite_setTexture(my->sprite, my->texture, sfFalse);
    return (my);
}