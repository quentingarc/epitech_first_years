/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** recup.c
*/

#include "my.h"

int dijkstra(char **input)
{
    char *ants = malloc(sizeof(char) * 3);
    char *start = malloc(sizeof(char) * 3);
    char *end = malloc(sizeof(char) * 3);
    char **tunnel = malloc(sizeof(char *) * 20);

    ants = recup_ants(input, ants);
    start = recup_start(input, start);
    end = recup_end(input, end);
    tunnel = recup_tunnel(input, tunnel);
}

char *recup_ants(char **input, char *ants)
{
    int x = 0;

    while (input[0][x] != ' ') {
        ants[x] = input[0][x];
        x += 1;
    }
    return ants;
}

char *recup_start(char **input, char *start)
{
    int y = 0;
    int x = 0;

    while (input[y] != NULL) {
        if (my_strcmp(input[y], "##start") != 0) {
            while (input[y + 1][x] != ' ') {
                start[x] = input[y + 1][x];
                x += 1;
            }
        }
        y += 1;
    }
    return start;
}

char *recup_end(char **input, char *end)
{
    int y = 0;
    int x = 0;

    while (input[y] != NULL) {
        if (my_strcmp(input[y], "##end") != 0) {
            while (input[y + 1][x] != ' ') {
                end[x] = input[y + 1][x];
                x += 1;
            }
        }
        y += 1;
    }
    return end;
}

char **recup_tunnel(char **input, char **tunnel)
{
    int x = 0;
    int y = 0;
    int i = 0;
    int o = 0;

    while (input[y][x] != '\0')
    {
        if (my_strcmp(&input[y][x], "-") != 0) {
            x -= 1;
            while (input[y][x] != ' ') {
                tunnel[i][o] = input[y][x];
                x += 1;
                o += 1;
            }
            y += 1;
        }
        x += 1;
        if (input[y][x] != ' ')
            y += 1;
    }
    return tunnel;
}