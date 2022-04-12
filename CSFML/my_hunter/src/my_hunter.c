/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_hunter.c
*/

#include "my.h"

void restart(flappy *flappy)
{
    flappy->position_flappy.x += flappy->speed;
    flappy->position_flappy.x += 1;
    if (flappy->position_flappy.x > 1920)
        flappy->position_flappy.x = -18;
}

int my_marappy(int ac, char **av)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};
    flappy *screen = int_sprite("images/Super_Mario.png", 0, 0);
    flappy *flappy = int_sprite("images/flappy.png", -18, 160);
    sfEvent event;

    window = sfRenderWindow_create(mode, "Marunter", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        restart(flappy);
        sfSprite_setPosition(flappy->sprite2, flappy->position_flappy);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_drawSprite(window, screen->sprite2, NULL);
        sfRenderWindow_drawSprite(window, flappy->sprite2, NULL);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}
