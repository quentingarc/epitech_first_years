/*
** EPITECH PROJECT, 2020
** my_world
** File description:
** 17/03/2020
*/

#include "framebuffer.h"
#include <stdlib.h>

void close_window(my_rpg *game)
{
    if (game->event.type == sfEvtClosed) {
        sfRenderWindow_close(game->window);
    }
}

sfRenderWindow *create_window(void)
{
    sfVideoMode mode = {960, 720, 32};
    sfRenderWindow *window =
    sfRenderWindow_create(mode, "legendofyou", sfResize | sfClose, NULL);
    if (!window) {
        return (NULL);
    }
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

sfIntRect init_rec(int left, int top, int width, int height)
{
    sfIntRect rec;

    rec.left = left;
    rec.top = top;
    rec.width = width;
    rec.height = height;
    return (rec);
}