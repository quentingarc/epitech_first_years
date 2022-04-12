/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** game.c
*/

#include "my.h"

void game(mouse_t *mouse, windowpause_t *window)
{
    int play = 0;
    sprite_t *sprite = init_struct_sprite();
    button_t *button = init_struct_button(mouse, window);

    play = my_menu(mouse, window);
    while ( play != 0) {
        if (play == 1) {
            play = my_defender(mouse, window, button, sprite);
        }
        if (play == 2) {
            play = my_menu(mouse, window);
        }
    }
    destroygame(sprite);
    destroymenu(sprite);
}