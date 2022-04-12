/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init.c
*/

#include "my.h"

mouse_t *init_struct_mouse(windowpause_t *window)
{
    mouse_t *mouse = malloc(sizeof(mouse_t));

    if (!mouse || !window)
        return NULL;

    mouse->mouse;
    return (mouse);
}

windowpause_t *init_struct_window_pause(void)
{
    windowpause_t *windowp = malloc(sizeof(windowpause_t));

    windowp->video_mode.bitsPerPixel = 32;
    windowp->video_mode.height = 400;
    windowp->video_mode.width = 550;
    windowp->window;
    return (windowp);
}

button_t *init_struct_button(mouse_t *mouse, windowpause_t *window)
{
    button_t *button = malloc(sizeof(button_t));

    if (!button || !mouse || !window)
        return NULL;

    button->rect = sfRectangleShape_create();
    mouse->mouse = sfMouse_getPositionRenderWindow(window->window);
    button->position.x = mouse->mouse.x;
    button->position.y = mouse->mouse.y;
    button->size.x = 5;
    button->size.y = 5;
    sfRectangleShape_setPosition(button->rect, button->position);
    sfRectangleShape_setSize(button->rect, button->size);
    sfRectangleShape_setFillColor(button->rect, sfWhite);
    return (button);
}

void init_the_rest(sprite_t *sprite, mouse_t *mouse)
{
    sprite->mouse = malloc(sizeof(mouse_design_t));
    sprite->particles = malloc(sizeof(particles_t));
    sprite->inventory = malloc(sizeof(inventory_t));
    sprite->player = malloc(sizeof(player1_t));
    sprite->monstre = malloc(sizeof(monstre_t));
    sprite->pnj = malloc(sizeof(pnj_t));
    sprite->settings = malloc(sizeof(settings_t));
    init_struct_particles(sprite);
    init_struct_mouse_design(sprite, mouse);
    init_struct_pnj(sprite);
    init_struct_pnj_text(sprite);
    init_struct_settings(sprite);
    init_struct_settings_exit(sprite);
    init_struct_inventory(sprite);
    init_struct_player(sprite);
    init_struct_monstre(sprite);
    init_struct_pause(sprite);
}

sprite_t *init_struct_sprite(mouse_t *mouse)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));

    if (!sprite)
        return NULL;
    sprite->play = malloc(sizeof(play_t));
    sprite->exit = malloc(sizeof(exit_t));
    sprite->menu = malloc(sizeof(menu_t));
    sprite->help = malloc(sizeof(help_t));
    sprite->map = malloc(sizeof(map1_t));
    sprite->pause = malloc(sizeof(pause_t));
    sprite->over = malloc(sizeof(over_t));
    sprite->winn = malloc(sizeof(winn_t));
    init_struct_winn(sprite);
    init_struct_over(sprite);
    init_the_rest(sprite, mouse);
    init_struct_map(sprite);
    init_struct_help(sprite);
    init_struct_menu(sprite);
    init_struct_exit(sprite);
    init_struct_play(sprite);
    return sprite;
}