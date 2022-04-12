/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** hihi.c
*/

#include "my.h"

sprite_t *init_struct_sprite(void)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));
    if (!sprite)
        return NULL;

    sprite->play = malloc(sizeof(play_t));
    sprite->exit = malloc(sizeof(exit_t));
    sprite->map = malloc(sizeof(map_t));
    sprite->monster = malloc(sizeof(monster_t));
    sprite->pause = malloc(sizeof(pause_t));
    sprite->music = sfMusic_createFromFile(("msc/disney.ogg"));
    sprite->music2 = sfMusic_createFromFile(("msc/touch.ogg"));

    init_struct_exit(sprite);
    init_struct_play(sprite);
    init_struct_map(sprite);
    init_struct_monster(sprite);
    init_struct_pause(sprite);
    return sprite;
}