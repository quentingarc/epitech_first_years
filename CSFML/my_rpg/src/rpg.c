/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** rpg.c
*/

#include "my.h"

void my_window(windowpause_t *window)
{
    window->video_mode.bitsPerPixel = 32;
    window->video_mode.height = 638;
    window->video_mode.width = 958;
    window->window = sfRenderWindow_create
    (window->video_mode, "forest", sfDefaultStyle, NULL);
}

void plac_tower(mouse_t *mouse, windowpause_t *window, button_t *button)
{
    mouse->mouse = sfMouse_getPositionRenderWindow(window->window);
    button->position.x = mouse->mouse.x;
    button->position.y = mouse->mouse.y;
    sfRectangleShape_setPosition(button->rect, button->position);
}

void closew(sprite_t *sprite, windowpause_t *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window->window);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) ||
    sfKeyboard_isKeyPressed(sfKeyP))
        sprite->pause->mpause = 1;
    if (sfKeyboard_isKeyPressed(sfKeyI)) {
        sprite->pause->minvent = 3;
        if (sfKeyboard_isKeyPressed(sfKeyReturn))
            sprite->pause->mpause = 0;
    }
}

void move(sprite_t *sprite, windowpause_t *window)
{
    if (sfKeyboard_isKeyPressed(sfKeyS))
        move_down(sprite, window);
    else if (sfKeyboard_isKeyPressed(sfKeyQ))
        move_left(sprite, window);
    else if (sfKeyboard_isKeyPressed(sfKeyZ))
        move_up(sprite, window);
    else
        move_bis(sprite, window);
    sfSprite_setPosition(sprite->player->mplayer_B, sprite->player->vplayer_B);
    sfSprite_setPosition(sprite->map->mmap1, sprite->map->vmap1);
    sfSprite_setPosition(sprite->monstre->mmonstre,
    sprite->monstre->vmonstre);
    sfSprite_setPosition(sprite->pnj->pnj_sprite,
    sprite->pnj->pnj_vector);
}

int rpg(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button)
{
    sfEvent event;
    my_window(window);
    while (sfRenderWindow_isOpen(window->window)) {
        if (sprite->pause->mpause == 0 && sprite->pause->minvent == 0)
            clocker(sprite, window, mouse, button);
        while (sfRenderWindow_pollEvent(window->window, &event))
            closew(sprite, window, event);
        draws(sprite, window);
        if (mpause(sprite, window, mouse, button) == 2)
            return 2;
        move(sprite, window);
        if (rpg_bis(mouse, window, sprite, button) == 4)
            return 4;
    }
    return 0;
}