/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_pause.c
*/

#include "my.h"

void butt(sprite_t *sprite)
{
    sprite->pause->buttonpause->bquit =
    sfTexture_createFromFile("img/quitbutton.png", NULL);
    sprite->pause->buttonpause->bbquit = sfSprite_create();
    sfSprite_setTexture(sprite->pause->buttonpause->bbquit,
    sprite->pause->buttonpause->bquit,
    sfFalse);
    sprite->pause->buttonpause->vbquit.x = 524;
    sprite->pause->buttonpause->vbquit.y = 300;
    sfSprite_setPosition(sprite->pause->buttonpause->bbquit,
    sprite->pause->buttonpause->vbquit);
}

void buttonpause_bis(sprite_t *sprite)
{
    sprite->pause->buttonpause->bplay =
    sfTexture_createFromFile("img/playbutton.png", NULL);
    sprite->pause->buttonpause->bbplay = sfSprite_create();
    sfSprite_setTexture(sprite->pause->buttonpause->bbplay,
    sprite->pause->buttonpause->bplay, sfFalse);
    sprite->pause->buttonpause->vbplay.x = 416;
    sprite->pause->buttonpause->vbplay.y = 300;
    sfSprite_setPosition(sprite->pause->buttonpause->bbplay,
    sprite->pause->buttonpause->vbplay);
    butt(sprite);
}

buttonpause_t *init_struct_buttonpause(sprite_t *sprite)
{
    buttonpause_t *buttonpause = malloc(sizeof(buttonpause_t));

    if (!sprite || !buttonpause)
        return NULL;
    sprite->pause->buttonpause->bmenu =
    sfTexture_createFromFile("img/menubutton.png", NULL);
    sprite->pause->buttonpause->bbmenu = sfSprite_create();
    sfSprite_setTexture(sprite->pause->buttonpause->bbmenu,
    sprite->pause->buttonpause->bmenu,
    sfFalse);
    sprite->pause->buttonpause->vbmenu.x = 312;
    sprite->pause->buttonpause->vbmenu.y = 300;
    sfSprite_setPosition(sprite->pause->buttonpause->bbmenu,
    sprite->pause->buttonpause->vbmenu);
    buttonpause_bis(sprite);
    return buttonpause;
}

pause_t *init_struct_pause(sprite_t *sprite)
{
    pause_t *pause = malloc(sizeof(pause_t));

    if (!pause || !sprite)
        return NULL;
    sprite->pause->mpause = 0;
    sprite->pause->minvent = 0;
    sprite->pause->pause = sfTexture_createFromFile("img/menupause.png", NULL);
    sprite->pause->ppause = sfSprite_create();
    sfSprite_setTexture(sprite->pause->ppause, sprite->pause->pause, sfFalse);
    sprite->pause->vpause.x = 300;
    sprite->pause->vpause.y = 250;
    sfSprite_setPosition(sprite->pause->ppause, sprite->pause->vpause);
    sprite->pause->buttonpause = malloc(sizeof(buttonpause_t));
    init_struct_buttonpause(sprite);
    return pause;
}