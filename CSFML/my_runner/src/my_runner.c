/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_hunter.c
*/

#include "my.h"

int my_doodle(int ac, char **av)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1080, 720, 32};
    sfEvent event;
    game_t *game = init_struct(0, 0);

    window = sfRenderWindow_create(mode, "lol", sfDefaultStyle, NULL);
    sfMusic_play(game->music);
    while (sfRenderWindow_isOpen(window)) {
        position(game);
        draw_p(game, window);
        jump(game, window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed ||
                sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(window);
        }
        sfRenderWindow_display(window);
    }
    fdestroy(game, window);
    return (0);
}

void draw_p(game_t *game, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, game->land->ssky, NULL);
    sfRenderWindow_drawSprite(window, game->land->ssun, NULL);
    sfRenderWindow_drawSprite(window, game->build->sb3, NULL);
    sfRenderWindow_drawSprite(window, game->build->sb2, NULL);
    sfRenderWindow_drawSprite(window, game->build->sb1, NULL);
    sfRenderWindow_drawSprite(window, game->build->sb4, NULL);
    sfRenderWindow_drawSprite(window, game->land->stree, NULL);
    sfRenderWindow_drawSprite(window, game->land->ssand, NULL);
}

void jump(game_t *game, sfRenderWindow *window)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && game->pos_doodle.y > 1)
    {
        game->pos_doodle.y = game->pos_doodle.y - 1;
        sfSprite_setPosition(game->sprite2, game->pos_doodle);
        sfRenderWindow_drawSprite(window, game->sprite2, NULL);
        return;
    }
    else if (game->pos_doodle.y < 483)
    {
        game->pos_doodle.y = game->pos_doodle.y + 0.5;
        sfSprite_setPosition(game->sprite, game->pos_doodle);
        sfRenderWindow_drawSprite(window, game->sprite, NULL);
    }
    sfRenderWindow_drawSprite(window, game->sprite, NULL);
}

void fdestroy(game_t *game, sfRenderWindow *window)
{
    sfRenderWindow_destroy(window);
    sfTexture_destroy(game->texture);
    sfMusic_destroy(game->music);
    sfTexture_destroy(game->texture2);
    sfSprite_destroy(game->sprite);
    sfSprite_destroy(game->sprite2);
    sfSprite_destroy(game->land->ssand);
    sfSprite_destroy(game->land->ssun);
    fdestroy_bis(game);
}

void fdestroy_bis(game_t *game)
{
    sfSprite_destroy(game->land->stree);
    sfSprite_destroy(game->land->ssky);
    sfSprite_destroy(game->build->sb1);
    sfSprite_destroy(game->build->sb2);
    sfSprite_destroy(game->build->sb3);
    sfSprite_destroy(game->build->sb4);
    sfTexture_destroy(game->land->sand);
    sfTexture_destroy(game->land->sun);
    sfTexture_destroy(game->land->tree);
    sfTexture_destroy(game->land->sky);
    sfTexture_destroy(game->build->b1);
    sfTexture_destroy(game->build->b2);
    sfTexture_destroy(game->build->b3);
    sfTexture_destroy(game->build->b4);
}