/*
** EPITECH PROJECT, 2019
** defender
** File description:
** test.c
*/

#include "my.h"

void create_monster(sprite_t *sprite)
{
    sprite->monster->monster =
    sfTexture_createFromFile("img/monstre.png", NULL);
    sprite->monster->mmonster = sfSprite_create();
    sprite->monster->vmonster.x = -70;
    sprite->monster->vmonster.y = 390;
    sfSprite_setPosition(sprite->monster->mmonster, sprite->monster->vmonster);
    sprite->monster->scd;
    sprite->monster->rectmonster.height = 47;
    sprite->monster->rectmonster.left = 0;
    sprite->monster->rectmonster.top = 0;
    sprite->monster->rectmonster.width = 56;
    sfSprite_setTexture
    (sprite->monster->mmonster, sprite->monster->monster, sfFalse);
    sfSprite_setTextureRect
    (sprite->monster->mmonster, sprite->monster->rectmonster);
    sprite->monster->cmonster = sfClock_create();
}

int pause(mouse_t *mouse, windowpause_t *window, sprite_t *sprite)
{
    sfMusic_pause(sprite->music);
    if (mouse->mouse.x <= 577 && mouse->mouse.x >= 377 &&
        mouse->mouse.y >= 160 && mouse->mouse.y <= 360) {
        sfRenderWindow_drawSprite(window->window, sprite->pause->mmenu, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfRenderWindow_close(window->window);
            return 2;
        }
    }
    spause(mouse, window, sprite);
    if (mouse->mouse.x <= 315 && mouse->mouse.x >= 115 &&
        mouse->mouse.y >= 160 && mouse->mouse.y <= 360) {
        sfRenderWindow_drawSprite(window->window, sprite->pause->qquit, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            sfRenderWindow_close(window->window);
    }
    return 0;
}

void spause(mouse_t *mouse, windowpause_t *window, sprite_t *sprite)
{
    if (mouse->mouse.x <= 838 && mouse->mouse.x >= 638 &&
        mouse->mouse.y >= 160 && mouse->mouse.y <= 360) {
        sfRenderWindow_drawSprite(window->window, sprite->pause->pplay, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfMusic_play(sprite->music);
            sfMusic_setLoop(sprite->music, sfTrue);
            window->screen = 0;
        }
    }
}

void clockscreen(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button)
{
    if (window->screen != 1) {
        my_clock(sprite, window, mouse, button);
        my_clock_bis(sprite, window, mouse, button);
    }
    if (window->screen == 1)
        sfRenderWindow_drawSprite(window->window, sprite->map->mmap, NULL);
}

void windowclose(windowpause_t *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            window->screen = 1;
        }
}