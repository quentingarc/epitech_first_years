/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_window.c
*/

#include "my.h"

windowpause_t *init_struct_window_pause(void)
{
    windowpause_t *windowp = malloc(sizeof(windowpause_t));

    windowp->video_mode.bitsPerPixel = 32;
    windowp->video_mode.height = 500;
    windowp->video_mode.width = 650;
    windowp->window;
    return (windowp);
}
