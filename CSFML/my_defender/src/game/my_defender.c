/*
** EPITECH PROJECT, 2019
** defender
** File description:
** my_defender.c
*/

#include "my.h"

int my_defender(mouse_t *mouse, windowpause_t *window,
button_t *button, sprite_t *sprite)
{
    twindow(window, sprite);
    while (sfRenderWindow_isOpen(window->window)) {
        clockscreen(mouse, window, sprite, button);
        windowclose(window);
        plac_tower(mouse, window, button);
        if (window->screen == 1) {
            sfRenderWindow_drawSprite(window->window,
            sprite->pause->ppause, NULL);
            if (pause(mouse, window, sprite) == 2)
                return 2;
            if (sfKeyboard_isKeyPressed(sfKeyEscape) &&
            sprite->monster->scd > 4)
                window->screen = 0;
        }
        sfRenderWindow_display(window->window);
    }
    return (0);
}

void *twindow(windowpause_t *window, sprite_t *sprite)
{
    window->video_mode.bitsPerPixel = 32;
    window->video_mode.height = 638;
    window->video_mode.width = 958;
    window->window = sfRenderWindow_create
    (window->video_mode, "monkeybomb", sfDefaultStyle, NULL);
    sfMusic_play(sprite->music);
    sfMusic_setLoop(sprite->music, sfTrue);
}

void plac_tower(mouse_t *mouse, windowpause_t *window, button_t *button)
{
    mouse->mouse = sfMouse_getPositionRenderWindow(window->window);
    button->position.x = mouse->mouse.x;
    button->position.y = mouse->mouse.y;
    sfRectangleShape_setPosition(button->rect, button->position);
}

void my_clock(sprite_t *sprite, windowpause_t
*window, mouse_t *mouse, button_t *button)
{
    sprite->monster->timemonster =
    sfClock_getElapsedTime(sprite->monster->cmonster);
    sprite->monster->scd =
    sprite->monster->timemonster.microseconds / 1000000.0;
    sfRenderWindow_clear(window->window, sfBlack);
    sfRenderWindow_drawSprite(window->window, sprite->map->mmap, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->monster->mmonster, NULL);
    if (sprite->monster->scd > 0.2) {
        move(sprite);
        sfClock_restart(sprite->monster->cmonster);
    }
    sfRenderWindow_drawRectangleShape(window->window, button->rect, NULL);
    if (sprite->monster->scd > 0.2) {
        sprite->monster->rectmonster.left += 56;
        if (sprite->monster->rectmonster.left == 224)
            sprite->monster->rectmonster.left = 0;
        sfSprite_setTextureRect(sprite->monster->mmonster,
        sprite->monster->rectmonster);
        sfClock_restart(sprite->monster->cmonster);
    }
}

void my_clock_bis(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button)
{
    sprite->monster->timemonster2 =
    sfClock_getElapsedTime(sprite->monster->cmonster2);
    sprite->monster->scd2 =
    sprite->monster->timemonster2.microseconds / 1000000.0;
    sfRenderWindow_drawSprite(window->window, sprite->monster->mmonster2, NULL);
    if (sprite->monster->scd2 > 0.2) {
        move_bis(sprite);
        sfClock_restart(sprite->monster->cmonster2);
    }
    if (sprite->monster->scd2 > 0.2) {
        sprite->monster->rectmonster2.left += 39;
        if (sprite->monster->rectmonster2.left == 234)
            sprite->monster->rectmonster2.left = 0;
        sfSprite_setTextureRect(sprite->monster->mmonster2,
        sprite->monster->rectmonster2);
        sfClock_restart(sprite->monster->cmonster2);
    }
}