/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** menu.c
*/

#include "my.h"

void place_image(mouse_t *mouse, windowpause_t *window, button_t *button)
{
    mouse->mouse = sfMouse_getPositionRenderWindow(window->window);
    button->position.x = mouse->mouse.x;
    button->position.y = mouse->mouse.y;
}

void *sprite_mode(windowpause_t *window)
{
    window->video_mode.bitsPerPixel = 32;
    window->video_mode.height = 444;
    window->video_mode.width = 682;
    window->window = sfRenderWindow_create
    (window->video_mode, "menu", sfDefaultStyle, NULL);
}

void position(sprite_t *sprite, windowpause_t *window)
{
    sprite->menu->timemenu = sfClock_getElapsedTime(sprite->menu->cmenu);
    sprite->menu->scd = sprite->menu->timemenu.microseconds / 1000000.0;
    if (sprite->menu->scd > 0.15) {
        sprite->menu->rectmenu.left += 682;
        if (sprite->menu->rectmenu.left == 16368)
            sprite->menu->rectmenu.left = 0;
        sfSprite_setTextureRect(sprite->menu->mmenu, sprite->menu->rectmenu);
        sfClock_restart(sprite->menu->cmenu);
    }
}

void imagemenu(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button)
{
    place_image(mouse, window, button);
    sfRenderWindow_display(window->window);
    sfRenderWindow_clear(window->window, sfBlack);
}

int my_menu(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button)
{
    sfEvent event;
    int start = 0;

    sprite_mode(window);
    while (sfRenderWindow_isOpen(window->window)) {
        position(sprite, window);
        mouse_animation(sprite, window, mouse);
        sfRenderWindow_clear(window->window, sfBlack);
        start = draw_sp(window->window, sprite, mouse);
        while (sfRenderWindow_pollEvent(window->window, &event)) {
            if (event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyEscape)) {
                sfRenderWindow_close(window->window);
                start = 0;
            }
        }
        imagemenu(mouse, window, sprite, button);
    }
    return (start);
}