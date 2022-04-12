/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_pnj_txt
*/

#include "my.h"

pnj_t *init_struct_pnj_text(sprite_t *sprite)
{
    pnj_t *pnj = malloc(sizeof(pnj_t));

    if (!pnj || !sprite)
        return NULL;

    sprite->pnj->text_texture = sfTexture_createFromFile("img/zonedetext.png",
    NULL);
    sprite->pnj->text_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->pnj->text_sprite,
    sprite->pnj->text_texture, sfFalse);
    sprite->pnj->text_vector.x = 400;
    sprite->pnj->text_vector.y = 520;
    sfSprite_setPosition(sprite->pnj->text_sprite, sprite->pnj->text_vector);
    init_struct_pnj_press(sprite);
    return pnj;
}

void init_struct_pnj_press(sprite_t *sprite)
{
    sprite->pnj->press_texture = sfTexture_createFromFile("img/press.png",
    NULL);
    sprite->pnj->press_sprite = sfSprite_create();
    sfSprite_setTexture(sprite->pnj->press_sprite,
    sprite->pnj->press_texture, sfFalse);
    sprite->pnj->press_vector.x = 770;
    sprite->pnj->press_vector.y = 620;
    sfSprite_setPosition(sprite->pnj->press_sprite, sprite->pnj->press_vector);
}

void text(sprite_t *sprite, windowpause_t *window)
{
    if (sfKeyboard_isKeyPressed(sfKeyE) && sprite->map->colmap1.r == 255 && sprite->map->colmap1.b != 255)
    sprite->pause->minvent = 6;
    if (sprite->map->colmap1.r == 255 && sprite->map->colmap1.b != 255 && !sfKeyboard_isKeyPressed(sfKeyE) && sprite->pause->minvent == 0)
    sfRenderWindow_drawSprite(window->window,
        sprite->pnj->press_sprite, NULL);
    if (sprite->map->colmap1.r == 255 && sprite->map->colmap1.b != 255 && sprite->pause->minvent == 6)
        sfRenderWindow_drawSprite(window->window,
        sprite->pnj->text_sprite, NULL);
}