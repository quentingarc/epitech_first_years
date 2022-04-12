/*
** EPITECH PROJECT, 2020
** yoyo
** File description:
** jaimelesgow
*/

#ifndef MAP_H_
#define MAP_H_

#define TILESET 32
#define STARTX 0
#define STARTY 0
#define MAXX 20
#define MAXY 20
#define GETTILE get_tile(game->map, game->player->pos.x, game->player->pos.y)

#include "framebuffer.h"
#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <SFML/Audio.h>

typedef struct map_s
{
    sfTexture *texture;
    int **layer1;
    int **layer2;
    int tileSetNumber;
    sfClock *clock;
} map_t;

int **get_map2(char **tab);
void print_int_map(int **map);
int **get_collision(int **map);
int **get_map(char **tab);
int **malloc_map(void);
map_t *init_map(char **map, char **collisions);
void draw_map(sfRenderWindow *window, map_t *);
int conv_pos(int n);
int get_tile(map_t *map, int x, int y);
#endif
