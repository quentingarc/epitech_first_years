/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_exit.c
*/

#include "my.h"

exit_t *init_struct_exit(sprite_t *sprite)
{
    exit_t *exit = malloc(sizeof(exit_t));

    if (!sprite || !exit)
        return NULL;

    sprite->exit->exit_bis = sfTexture_createFromFile("img/exit.png", NULL);
    sprite->exit->eexit_bis = sfSprite_create();
    sfSprite_setTexture(sprite->exit->eexit_bis, sprite->exit->exit_bis,
    sfFalse);
    sprite->exit->vexit_bis.x = 225;
    sprite->exit->vexit_bis.y = 370;
    sfSprite_setPosition(sprite->exit->eexit_bis, sprite->exit->vexit_bis);
    return exit;
}