/*
** EPITECH PROJECT, 2019
** defender
** File description:
** ini_struct.c
*/

#include "my.h"

play_t *init_struct_play(sprite_t *sprite)
{
    play_t *play = malloc(sizeof(play_t));

    if (!play || !sprite)
        return NULL;

    sprite->play->play = sfTexture_createFromFile(".png", NULL);
    sprite->play->pplay = sfSprite_create();
    sfSprite_setTexture(sprite->play->pplay, sprite->play->play, sfFalse);
    sprite->play->vplay.x = 0;
    sprite->play->vplay.y = 0;
    sfSprite_setPosition(sprite->play->pplay, sprite->play->vplay);
    sprite->play->play_bis = sfTexture_createFromFile("img/play2.png", NULL);
    sprite->play->pplay_bis = sfSprite_create();
    sfSprite_setTexture(sprite->play->pplay_bis, sprite->play->play_bis,
    sfFalse);
    sprite->play->vplay_bis.x = 215;
    sprite->play->vplay_bis.y = 255;
    sfSprite_setPosition(sprite->play->pplay_bis, sprite->play->vplay_bis);
    return play;
}
