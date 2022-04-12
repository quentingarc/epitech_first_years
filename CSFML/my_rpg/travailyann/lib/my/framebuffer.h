/*
** EPITECH PROJECT, 2019
** framebuffer.h
** File description:
** 11/11/19
*/

#ifndef MYRPG_H_
#define MYRPG_H_

#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <SFML/Audio.h>
#include <stddef.h>
#include <stdbool.h>
#define MAP_X 15
#define MAP_Y 15
#define SCREEN_WIDTH 960
#define SCREEN_HEIGHT 720
#define TILE_SIZE 16
#define SAMP 64
#include "map.h"

typedef struct my_win_s
{
    sfRenderWindow *window;
    sfView *view;
    sfVideoMode mode;
    struct player_s *player;
    struct map_s *map;
    sfEvent event;
    sfClock *clock;
    sfTime time;
    float seconds;
    int state;
} my_rpg;

typedef struct my_sprite_s
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rec;
    sfClock *loop;
} my_sprite_t;

#include "player.h"

typedef struct my_sound
{
    sfSound *sound;
    sfSound *sound_click;
    sfSoundBuffer *soundbuffer;
} my_sound_t;

my_sprite_t *rotation_button(void);
my_rpg *init_my_rpg(char **map, char **col);
sfRenderWindow *create_window(void);
void close_window(my_rpg *);
int game_loop(my_rpg *);
void set_scale_parallax(float x, float y, my_sprite_t **my);
my_sprite_t *launch_parallax(my_sprite_t *my, sfVector2f speed);
my_sprite_t *create_sprite_parallax(char *path, sfVector2f pos);
sfIntRect init_rec(int left, int top, int width, int height);
void button_launch(my_rpg *);
my_sprite_t *game_button(void);
my_sound_t *create_sound(char *road);
void my_events(my_rpg *game);

#endif