/*
** EPITECH PROJECT, 2019
** defender
** File description:
** defender.c
*/

#include "my.h"

int my_menu(mouse_t *mouse, windowpause_t *window)
{
    if (!mouse || !window)
        return (84);
    sfEvent event;
    int start = 0;
    sprite_t *sprite = init_struct_sprite();
    button_t *button = init_struct_button(mouse, window);
    sprite_mode(window);
    while (sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        start = draw_sp(window->window, sprite, mouse);
        sfRenderWindow_drawRectangleShape(window->window, button->rect, NULL);
        while (sfRenderWindow_pollEvent(window->window, &event)) {
            if (event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyEscape)) {
                sfRenderWindow_close(window->window);
                start = 0;
            }
        }
        place_tower(mouse, window, button);
    }
    return (start);
}

void *sprite_mode(windowpause_t *window)
{
    window->video_mode.bitsPerPixel = 32;
    window->video_mode.height = 500;
    window->video_mode.width = 650;
    window->window = sfRenderWindow_create
    (window->video_mode, "menu", sfDefaultStyle, NULL);
}

int draw_sp(sfRenderWindow *window, sprite_t *sprite, mouse_t *mouse)
{
    sfRenderWindow_drawSprite(window, sprite->play->pplay, NULL);
    if (mouse->mouse.x <= 412 && mouse->mouse.x >= 250 &&
    mouse->mouse.y >= 378 && mouse->mouse.y <= 456) {
        sfRenderWindow_drawSprite(window, sprite->exit->eexit_bis, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            sfRenderWindow_close(window);
            return 0;
    }
    if (mouse->mouse.x <= 412 && mouse->mouse.x >= 250 &&
    mouse->mouse.y >= 268 && mouse->mouse.y <= 345) {
        sfRenderWindow_drawSprite(window, sprite->play->pplay_bis, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            sfRenderWindow_close(window);
    }
    return 1;
}

void place_tower(mouse_t *mouse, windowpause_t *window, button_t *button)
{
    mouse->mouse = sfMouse_getPositionRenderWindow(window->window);
    button->position.x = mouse->mouse.x;
    button->position.y = mouse->mouse.y;
    sfRenderWindow_display(window->window);
}