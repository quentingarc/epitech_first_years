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

typedef struct s_windowpause {
    sfRenderWindow *window;
    sfVideoMode video_mode;
    int screen;
} windowpause_t;

typedef struct s_button {
    sfRectangleShape *rect;
    sfVector2f position;
    sfVector2f size;
}button_t;

typedef struct s_mouse {
    sfVector2i mouse;
}mouse_t;

typedef struct s_exit {
    sfTexture *exit_bis;
    sfSprite *eexit_bis;
    sfVector2f vexit_bis;
}exit_t;

typedef struct s_play {
    sfTexture *play;
    sfSprite *pplay;
    sfVector2f vplay;
    sfTexture *play_bis;
    sfSprite *pplay_bis;
    sfVector2f vplay_bis;
}play_t;

typedef struct s_map {
    sfTexture *map;
    sfSprite *mmap;
    sfVector2f vmap;
}map_t;

typedef struct s_pause {
    sfTexture *pause;
    sfSprite *ppause;
    sfVector2f vpause;
    sfTexture *menu;
    sfSprite *mmenu;
    sfVector2f vmenu;
    sfTexture *play;
    sfSprite *pplay;
    sfVector2f vplay;
    sfTexture *quit;
    sfSprite *qquit;
    sfVector2f vquit;
}pause_t;

typedef struct s_monster {
    sfTexture *monster;
    sfSprite *mmonster;
    sfClock *cmonster;
    sfTime timemonster;
    sfIntRect rectmonster;
    float scd;
    sfVector2f vmonster;
    sfTexture *monster2;
    sfSprite *mmonster2;
    sfVector2f vmonster2;
    sfClock *cmonster2;
    sfTime timemonster2;
    sfIntRect rectmonster2;
    float scd2;
}monster_t;


typedef struct s_sprite {
    play_t *play;
    sfMusic *music;
    sfMusic *music2;
    exit_t *exit;
    map_t *map;
    monster_t *monster;
    pause_t *pause;
}sprite_t;



        /*ini_struct*/
button_t *init_struct_button(mouse_t *mouse, windowpause_t *window);
mouse_t *init_struct_mouse(windowpause_t *window);
windowpause_t *init_struct_window_pause(void);
exit_t *init_struct_exit(sprite_t *sprite);
play_t *init_struct_play(sprite_t *sprite);
windowpause_t *init_struct_window(void);

        /*init_strct_bis*/
monster_t *init_struct_monster(sprite_t *sprite);
map_t *init_struct_map(sprite_t *sprite);
pause_t *init_struct_pause(sprite_t *sprite);
sprite_t *init_struct_sprite(void);

        /*my_menu*/
int my_menu(mouse_t *mouse, windowpause_t *window);
int draw_sp(sfRenderWindow *window, sprite_t *sprite, mouse_t *mouse);
void place_tower(mouse_t *mouse, windowpause_t *window, button_t *button);

        /*my_defender*/
void plac_tower(mouse_t *mouse, windowpause_t *window, button_t *button);
int my_defender(mouse_t *mouse, windowpause_t *window,
button_t *button, sprite_t *sprite);
void my_clock(sprite_t *sprite, windowpause_t *window, mouse_t *mouse,
button_t *button);
void my_clock_bis(sprite_t *sprite, windowpause_t *window, mouse_t *mouse,
button_t *button);

        /*test*/
void move(sprite_t *sprite);
void move_bis(sprite_t *sprite);
void create_monster(sprite_t *sprite);
int pause(mouse_t *mouse, windowpause_t *window, sprite_t *sprite);
void game(mouse_t *mouse, windowpause_t *window);
void clockscreen(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button);
void windowclose(windowpause_t *window);
void *pquit(sprite_t *sprite);
void *monsterp(sprite_t *sprite);
void *sprite_mode(windowpause_t *window);
void spause(mouse_t *mouse, windowpause_t *window, sprite_t *sprite);
void *twindow(windowpause_t *window, sprite_t *sprite);
void destroymenu(sprite_t *sprite);
void destroygame(sprite_t *sprite);


#endif /*MY_H_*/