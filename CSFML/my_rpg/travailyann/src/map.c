/*
** EPITECH PROJECT, 2020
** yoyo
** File description:
** jaimelesgow
*/

#include "map.h"

static void draw_tile(sfSprite *sprite, int a)
{
    int xsource = (a % TILESET * TILE_SIZE);
    int ysource = (a /TILESET * TILE_SIZE);
    sfSprite_setTextureRect(sprite,
    (sfIntRect){xsource, ysource, TILE_SIZE, TILE_SIZE});
}

static void place_tile(sfRenderWindow *window,
sfSprite *sprite, int mapX, int mapY)
{
    sfSprite_setPosition(sprite,
    (sfVector2f){mapX*TILE_SIZE, mapY*TILE_SIZE});
    sfRenderWindow_drawSprite(window, sprite, sfFalse);
}

sfSprite *load_spritesheet(map_t *map)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, map->texture, sfFalse);
    return (sprite);
}

void draw_map(sfRenderWindow *window, map_t *map)
{
    int mapX = STARTX / TILE_SIZE;
    int mapY = STARTY / TILE_SIZE;
    sfSprite *sprite = load_spritesheet(map);

    while (mapY < MAXY) {
        while (mapX < MAXX) {
            draw_tile(sprite, map->layer1[mapY][mapX]);
            place_tile(window, sprite, mapX, mapY);
            mapX++;
        }
        mapX = STARTX / TILE_SIZE;
        mapY++;
    }
}