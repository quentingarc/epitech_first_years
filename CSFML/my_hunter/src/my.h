/*
** EPITECH PROJECT, 2019
** quentin
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Window/Event.h>
#include <time.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct window {
    sfRenderWindow* window;
    sfVideoMode video_mode;
} window_t;

typedef struct flappy {
    sfTexture *texture;
    sfSprite *sprite2;
    sfVector2f position_flappy;
    float speed;
}flappy;

flappy *int_sprite(char *str, int x, int y);
void restart(flappy *flappy);
int my_marappy(int ac, char **av);
#endif /*MY_H_*/