/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** settings
*/

#include "my.h"

void settings_window(windowpause_t *window)
{
    window->video_mode.bitsPerPixel = 32;
    window->video_mode.height = 550;
    window->video_mode.width = 880;
    window->window = sfRenderWindow_create
    (window->video_mode, "commands", sfDefaultStyle, NULL);
}

int return_to_menu(sfRenderWindow *window, sprite_t *sprite, mouse_t *mouse)
{
    sfRenderWindow_drawSprite(window,
    sprite->settings->settings_sprite, NULL);
    sfRenderWindow_drawSprite(window, sprite->settings->exit_settings_sprite,
    NULL);
    if (mouse->mouse.x <= 766 && mouse->mouse.x >= 700 &&
    mouse->mouse.y >= 500 && mouse->mouse.y <= 524) {
        sfRenderWindow_drawSprite(window,
        sprite->settings->exit_settings_sprite_bis, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfRenderWindow_close(window);
            return 2;
        }
    }
    return 0;
}

int my_settings(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button)
{
    sfEvent event;
    int start = 0;

    settings_window(window);
    while (sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        start = return_to_menu(window->window, sprite, mouse);
        while (sfRenderWindow_pollEvent(window->window, &event)) {
            if (event.type == sfEvtClosed ||
                sfKeyboard_isKeyPressed(sfKeyEscape)) {
                sfRenderWindow_close(window->window);
                start = 0;
            }
        }
        mouse->mouse = sfMouse_getPositionRenderWindow(window->window);
        button->position.x = mouse->mouse.x;
        button->position.y = mouse->mouse.y;
        sfRenderWindow_display(window->window);
        sfRenderWindow_clear(window->window, sfBlack);
    }
    return (start);
}