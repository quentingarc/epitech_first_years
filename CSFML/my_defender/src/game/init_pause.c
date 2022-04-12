/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_pause.c
*/

#include "my.h"

pause_t *init_struct_pause(sprite_t *sprite)
{
    if (!sprite)
        return NULL;

    sprite->pause->pause = sfTexture_createFromFile("img/pause.png", NULL);
    sprite->pause->ppause = sfSprite_create();
    sfSprite_setTexture(sprite->pause->ppause, sprite->pause->pause, sfFalse);
    sprite->pause->vpause.x = 115;
    sprite->pause->vpause.y = 160;
    sfSprite_setPosition(sprite->pause->ppause, sprite->pause->vpause);
    sprite->pause->play = sfTexture_createFromFile("img/play.png", NULL);
    sprite->pause->pplay = sfSprite_create();
    sfSprite_setTexture(sprite->pause->pplay, sprite->pause->play, sfFalse);
    sprite->pause->vplay.x = 637;
    sprite->pause->vplay.y = 160;
    sfSprite_setPosition(sprite->pause->pplay, sprite->pause->vplay);
    pquit(sprite);
}

void *pquit(sprite_t *sprite)
{
    sprite->pause->quit = sfTexture_createFromFile("img/quit.png", NULL);
    sprite->pause->qquit = sfSprite_create();
    sfSprite_setTexture(sprite->pause->qquit, sprite->pause->quit, sfFalse);
    sprite->pause->vquit.x = 115;
    sprite->pause->vquit.y = 160;
    sfSprite_setPosition(sprite->pause->qquit, sprite->pause->vquit);
    sprite->pause->menu = sfTexture_createFromFile("img/menu2.png", NULL);
    sprite->pause->mmenu = sfSprite_create();
    sfSprite_setTexture(sprite->pause->mmenu, sprite->pause->menu, sfFalse);
    sprite->pause->vmenu.x = 376;
    sprite->pause->vmenu.y = 160;
    sfSprite_setPosition(sprite->pause->mmenu, sprite->pause->vmenu);
}