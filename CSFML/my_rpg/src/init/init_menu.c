/*
** EPITECH PROJECT, 2019
** vmtomac
** File description:
** init_menu.c
*/

#include "my.h"

play_t *init_struct_play(sprite_t *sprite)
{
    play_t *play = malloc(sizeof(play_t));

    if (!play || !sprite)
        return NULL;
    sprite->play->play = sfTexture_createFromFile("img/play1.png", NULL);
    sprite->play->pplay = sfSprite_create();
    sfSprite_setTexture(sprite->play->pplay, sprite->play->play, sfFalse);
    sprite->play->vplay.x = 420;
    sprite->play->vplay.y = 380;
    sfSprite_setPosition(sprite->play->pplay, sprite->play->vplay);
    sprite->play->play_bis = sfTexture_createFromFile("img/play2.png", NULL);
    sprite->play->pplay_bis = sfSprite_create();
    sfSprite_setTexture(sprite->play->pplay_bis, sprite->play->play_bis,
    sfFalse);
    sprite->play->vplay_bis.x = 415;
    sprite->play->vplay_bis.y = 375;
    sfSprite_setPosition(sprite->play->pplay_bis, sprite->play->vplay_bis);
    return play;
}

menu_t *init_struct_menu(sprite_t *sprite)
{
    menu_t *menu = malloc(sizeof(menu_t));

    if (!menu || !sprite)
        return NULL;
    sprite->menu->menu = sfTexture_createFromFile("img/menu.png", NULL);
    sprite->menu->mmenu = sfSprite_create();
    sfSprite_setTexture(sprite->menu->mmenu, sprite->menu->menu, sfFalse);
    sprite->menu->vmenu.x = 0;
    sprite->menu->vmenu.y = 0;
    sfSprite_setPosition(sprite->menu->mmenu, sprite->menu->vmenu);
    sprite->menu->scd;
    sprite->menu->rectmenu.height = 444;
    sprite->menu->rectmenu.left = 0;
    sprite->menu->rectmenu.top = 0;
    sprite->menu->rectmenu.width = 682;
    sfSprite_setTextureRect(sprite->menu->mmenu, sprite->menu->rectmenu);
    sprite->menu->cmenu = sfClock_create();
    return menu;
}

help_t *init_struct_help(sprite_t *sprite)
{
    help_t *help = malloc(sizeof(help_t));

    if (!sprite || !help)
        return NULL;
    sprite->help->help = sfTexture_createFromFile("img/help1.png", NULL);
    sprite->help->hhelp = sfSprite_create();
    sfSprite_setTexture(sprite->help->hhelp, sprite->help->help,
    sfFalse);
    sprite->help->vhelp.x = 220;
    sprite->help->vhelp.y = 380;
    sfSprite_setPosition(sprite->help->hhelp, sprite->help->vhelp);
    sprite->help->help_bis = sfTexture_createFromFile("img/help2.png", NULL);
    sprite->help->hhelp_bis = sfSprite_create();
    sfSprite_setTexture(sprite->help->hhelp_bis, sprite->help->help_bis,
    sfFalse);
    sprite->help->vhelp_bis.x = 215;
    sprite->help->vhelp_bis.y = 375;
    sfSprite_setPosition(sprite->help->hhelp_bis, sprite->help->vhelp_bis);
    return help;
}

exit_t *init_struct_exit(sprite_t *sprite)
{
    exit_t *exit = malloc(sizeof(exit_t));

    if (!sprite || !exit)
        return NULL;
    sprite->exit->exit = sfTexture_createFromFile("img/quit1.png", NULL);
    sprite->exit->eexit = sfSprite_create();
    sfSprite_setTexture(sprite->exit->eexit, sprite->exit->exit,
    sfFalse);
    sprite->exit->vexit.x = 20;
    sprite->exit->vexit.y = 380;
    sfSprite_setPosition(sprite->exit->eexit, sprite->exit->vexit);
    sprite->exit->exit_bis = sfTexture_createFromFile("img/quit2.png", NULL);
    sprite->exit->eexit_bis = sfSprite_create();
    sfSprite_setTexture(sprite->exit->eexit_bis, sprite->exit->exit_bis,
    sfFalse);
    sprite->exit->vexit_bis.x = 20;
    sprite->exit->vexit_bis.y = 380;
    sfSprite_setPosition(sprite->exit->eexit_bis, sprite->exit->vexit_bis);
    return exit;
}