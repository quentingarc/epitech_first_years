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
#include <unistd.h>

typedef struct s_window {
    sfRenderWindow* window;
    sfVideoMode video_mode;
} window_t;

typedef struct s_build {
    sfTexture *b1;
    sfSprite *sb1;
    sfVector2f vb1;
    sfTexture *b2;
    sfSprite *sb2;
    sfVector2f vb2;
    sfTexture *b3;
    sfSprite *sb3;
    sfVector2f vb3;
    sfTexture *b4;
    sfSprite *sb4;
    sfVector2f vb4;
} build_t;

typedef struct s_land {
    sfTexture *sand;
    sfSprite *ssand;
    sfVector2f vsand;
    sfTexture *sky;
    sfSprite *ssky;
    sfTexture *sun;
    sfSprite *ssun;
    sfVector2f vsun;
    sfTexture *tree;
    sfSprite *stree;
    sfVector2f vtree;
}land_t;


typedef struct s_game {
    land_t *land;
    build_t *build;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos_doodle;
    sfSprite *sprite2;
    sfTexture *texture2;
    sfMusic *music;
}game_t;

int my_doodle(int ac, char **av);
int my_putstr(char const *str);
void my_putchar(char c);
int help(int ac, char **av);
game_t *init_struct(int x, int y);
game_t *init_struct_bis(int x, int y, game_t *game);
game_t *init_struct_tiers(int x, int y, game_t *game);
int position(game_t *game);
void draw_p(game_t *game, sfRenderWindow *window);
int position_bis(game_t *game);
void jump(game_t *game, sfRenderWindow *window);
void fdestroy(game_t *game, sfRenderWindow *window);
void fdestroy_bis(game_t *game);
game_t *init_struct_quatiers(int x, int y, game_t *game);

#endif /*MY_H_*/