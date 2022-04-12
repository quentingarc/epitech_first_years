/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** button_menu.c
*/

#include "my.h"

int draw_play(sfRenderWindow *window, sprite_t *sprite, mouse_t *mouse)
{
    sfRenderWindow_drawSprite(window, sprite->play->pplay, NULL);
    if (mouse->mouse.x <= 568 && mouse->mouse.x >= 420 &&
    mouse->mouse.y >= 380 && mouse->mouse.y <= 400) {
        sfRenderWindow_drawSprite(window, sprite->play->pplay_bis, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfRenderWindow_close(window);
            return 1;
        }
    }
    return 0;
}

int draw_sp_bis(sfRenderWindow *window, sprite_t *sprite, mouse_t *mouse)
{
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_drawSprite(window, sprite->menu->mmenu, NULL);
    sfRenderWindow_drawSprite(window, sprite->exit->eexit, NULL);
    if (mouse->mouse.x <= 85 && mouse->mouse.x >= 20 &&
    mouse->mouse.y >= 380 && mouse->mouse.y <= 400) {
        sfRenderWindow_drawSprite(window, sprite->exit->eexit_bis, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfRenderWindow_close(window);
            return 1;
        }
    }
    return 0;
}

int draw_sp(sfRenderWindow *window, sprite_t *sprite, mouse_t *mouse)
{
    if (draw_sp_bis(window, sprite, mouse) == 1)
        return 0;
    sfRenderWindow_drawSprite(window, sprite->help->hhelp, NULL);
    if (mouse->mouse.x >= 220 && mouse->mouse.x <= 365 &&
    mouse->mouse.y >= 380 && mouse->mouse.y <= 400) {
        sfRenderWindow_drawSprite(window, sprite->help->hhelp_bis, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfRenderWindow_close(window);
            return 3;
        }
    }
    if (draw_play(window, sprite, mouse) == 1)
        return 1;
    sfRenderWindow_drawSprite(window, sprite->mouse->mouse_sprite, NULL);
    return 0;
}