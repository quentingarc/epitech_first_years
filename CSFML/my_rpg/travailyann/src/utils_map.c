/*
** EPITECH PROJECT, 2020
** yoyo
** File description:
** jaimelesgow
*/

#include "map.h"
#include <stdio.h>

int get_tile(map_t *map, int x, int y)
{
    x += 8;
    y += 16;
    if (x < 0 || y < 0 || conv_pos(x) >= MAXX || conv_pos(y) >= MAXY) {
        return (7);
    }
    printf("truex=%d truey=%d x=%d y=%d\n", x, y, conv_pos(x), conv_pos(y));
    return (map->layer2[conv_pos(x)][conv_pos(y)]);
}

int conv_pos(int n)
{
    int i = 1;
    int count = 0;

    while (i <= n) {
        if ((i % TILE_SIZE) == 0) {
            ++count;
        }
        ++i;
    }
    while (count > MAXX || count > MAXY) {
        --count;
    }
    return (count);
}

int **malloc_map(void)
{
    int **map = NULL;
    int i = 0;

    if (!(map = malloc(sizeof(int*) * MAXY))) {
        return (NULL);
    }
    while (i < MAXY) {
        if (!(map[i] = malloc(sizeof(int) * MAXX))) {
            return (NULL);
        }
        ++i;
    }
    return (map);
}