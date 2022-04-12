/*
** EPITECH PROJECT, 2020
** yoyo
** File description:
** jaimelesgow
*/

#include "map.h"
#include <stdio.h>
#include "my.h"

int **get_map(char **tab)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int **test = NULL;

    if (!(test = malloc_map())) {
        return (NULL);
    }
    while (j < MAXY) {
        while (i < MAXX) {
            test[i][j] = my_atoi(tab[x]);
            ++i;
            ++x;
        }
        i = 0;
        ++j;
    }
    return (test);
}

int **get_map2(char **tab)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int **test = malloc(sizeof(int*) * MAXY);

    while (j < MAXY) {
        test[j] = malloc(sizeof(int) * MAXX);
        while (i < MAXX) {
            test[j][i] = my_atoi(tab[x]);
            ++i;
            ++x;
        }
        i = 0;
        ++j;
    }
    return (test);
}

map_t *init_map(char **my_map, char **collisions)
{
    map_t *map = NULL;

    if (!(map = malloc(sizeof*(map)))) {
        return (NULL);
    }
    map->layer1 = get_map2(my_map);
    map->layer2 = get_map(collisions);
    map->texture =
    sfTexture_createFromFile("travailyann/sprite/0x72_DungeonTilesetII_v1.3.png"
    , NULL);
    map->clock = sfClock_create();
    return (map);
}