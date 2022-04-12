/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** game.c
*/

#include "my.h"
#include "framebuffer.h"

int my_cave(void)
{
    char **point = my_doubletab(',', open_and_read("travailyann/map/map2.csv"));
    char **col = my_doubletab(',', open_and_read("travailyann/map/collisionmap2.csv"));

    my_rpg *game = init_my_rpg(point, col);
    game_loop(game);
}

int game(char **env)
{
    int play = 2;
    windowpause_t *window = init_struct_window_pause();
    mouse_t *mouse = init_struct_mouse(window);
    sprite_t *sprite = init_struct_sprite(mouse);
    button_t *button = init_struct_button(mouse, window);

    while (play != 0) {
        if (env == NULL)
            return (84);
        if (play == 2)
            play = my_menu(mouse, window, sprite, button);
        if (play == 1)
            play = rpg(mouse, window, sprite, button);
        if (play == 4)
            play = my_cave();
        if (play == 3)
            play = my_settings(mouse, window, sprite, button);
    }
    return 0;
}