/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Export.h>


typedef struct s_mouse {
    sfVector2i mouse;
}mouse_t;

typedef struct s_play {
    sfTexture *play;
    sfSprite *pplay;
    sfVector2f vplay;
    sfTexture *play_bis;
    sfSprite *pplay_bis;
    sfVector2f vplay_bis;
}play_t;

typedef struct s_inventory {
    sfSprite *inventory_sprite;
    sfTexture *inventory_texture;
    sfVector2f inventory_vector;
} inventory_t;

typedef struct s_particles {
    sfSprite *particles_sprite;
    sfTexture *particles_texture;
    sfVector2f particles_vector;
    sfIntRect intrect;
    sfClock *clock;
    sfTime time;
    float seconds;
} particles_t;

typedef struct s_settings {
    sfTexture *settings_texture;
    sfSprite *settings_sprite;
    sfVector2f settings_vector;
    sfTexture *exit_settings_texture;
    sfSprite *exit_settings_sprite;
    sfVector2f exit_settings_vector;
    sfTexture *exit_settings_texture_bis;
    sfSprite *exit_settings_sprite_bis;
    sfVector2f exit_settings_vector_bis;
}settings_t;

typedef struct s_mouse_design {
    sfSprite *mouse_sprite;
    sfTexture *mouse_texture;
    sfVector2f mouse_vector;
    sfIntRect intrect;
    sfClock *clock;
    sfTime time;
    float seconds;
} mouse_design_t;

typedef struct s_menu {
    sfTexture *menu;
    sfSprite *mmenu;
    sfVector2f vmenu;
    sfClock *cmenu;
    sfTime timemenu;
    sfIntRect rectmenu;
    float scd;
}menu_t;

typedef struct s_buttonpause {
    sfTexture *bquit;
    sfSprite *bbquit;
    sfVector2f vbquit;
    sfTexture *bplay;
    sfSprite *bbplay;
    sfVector2f vbplay;
    sfTexture *bmenu;
    sfSprite *bbmenu;
    sfVector2f vbmenu;
}buttonpause_t;

typedef struct s_pause {
    int mpause;
    int minvent;
    sfTexture *pause;
    sfSprite *ppause;
    sfVector2f vpause;
    buttonpause_t *buttonpause;
}pause_t;

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

typedef struct s_exit {
    sfTexture *exit_bis;
    sfSprite *eexit_bis;
    sfVector2f vexit_bis;
    sfTexture *exit;
    sfSprite *eexit;
    sfVector2f vexit;
}exit_t;

typedef struct s_help {
    sfTexture *help;
    sfSprite *hhelp;
    sfVector2f vhelp;
    sfTexture *help_bis;
    sfSprite *hhelp_bis;
    sfVector2f vhelp_bis;
}help_t;

typedef struct s_map1 {
    sfTexture *map1;
    sfSprite *mmap1;
    sfVector2f vmap1;
    sfClock *cmap1;
    sfTime timemap1;
    sfColor colmap1;
    sfImage *imap1;
    float imapx;
    float imapy;
    sfIntRect rectmap1;
    float scd1;
}map1_t;

typedef struct s_monster {
    sfTexture *monstre;
    sfSprite *mmonstre;
    sfVector2f vmonstre;
    sfClock *cmonstre;
    sfTime timemonstre;
    sfIntRect rectmonstre;
    float scd;
}monstre_t;

typedef struct s_pnj {
    sfTexture *pnj_texture;
    sfSprite *pnj_sprite;
    sfVector2f pnj_vector;
    sfClock *pnj_clock;
    sfTexture *text_texture;
    sfSprite *text_sprite;
    sfVector2f text_vector;
    sfTexture *press_texture;
    sfSprite *press_sprite;
    sfVector2f press_vector;
}pnj_t;

typedef struct s_player1 {
    sfTexture *player_B;
    sfSprite *mplayer_B;
    sfVector2f vplayer_B;
    sfClock *cplayer_B;
    sfTime timeplayer_B;
    sfIntRect rectplayer_B;
    float scdB;
}player1_t;

typedef struct s_over {
    sfTexture *over;
    sfSprite *oover;
    sfVector2f vover;
    sfClock *ccover;
    sfTime timeover;
    sfIntRect rectover;
    float scd;
}over_t;

typedef struct s_winn {
    sfTexture *winn;
    sfSprite *wwinn;
    sfVector2f vwinn;
    sfClock *cwinn;
    sfTime timewinn;
    sfIntRect rectwinn;
    float scd;
}winn_t;

typedef struct s_sprite {
    play_t *play;
    sfMusic *music;
    sfMusic *music2;
    menu_t *menu;
    exit_t *exit;
    help_t *help;
    map1_t *map;
    pause_t *pause;
    mouse_design_t *mouse;
    particles_t *particles;
    inventory_t *inventory;
    monstre_t *monstre;
    player1_t *player;
    pnj_t *pnj;
    over_t *over;
    winn_t *winn;
    settings_t *settings;
}sprite_t;

    /*lib*/

void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);

    /*init_game*/

map1_t *init_struct_map(sprite_t *sprite);

    /*init_main*/

void init_the_rest(sprite_t *sprite, mouse_t *mouse);
mouse_t *init_struct_mouse(windowpause_t *window);
windowpause_t *init_struct_window_pause(void);
button_t *init_struct_button(mouse_t *mouse, windowpause_t *window);
sprite_t *init_struct_sprite(mouse_t *mouse);

    /*init_menu*/

play_t *init_struct_play(sprite_t *sprite);
menu_t *init_struct_menu(sprite_t *sprite);
help_t *init_struct_help(sprite_t *sprite);
exit_t *init_struct_exit(sprite_t *sprite);

    /*init_winn*/

winn_t *init_struct_winn(sprite_t *sprite);

    /*init_over*/

over_t *init_struct_over(sprite_t *sprite);

    /*init_monster*/

monstre_t *init_struct_monstre(sprite_t *sprite);

    /* init_settings*/

settings_t *init_struct_settings(sprite_t *sprite);
settings_t *init_struct_settings_exit(sprite_t *sprite);

/* init_particles */

particles_t *init_struct_particles(sprite_t *sprite);
void particles_animation(sprite_t *sprite, windowpause_t *win);

/* init_inventory */

inventory_t *init_struct_inventory(sprite_t *sprite);

    /*init_mouse*/

mouse_design_t *init_struct_mouse_design(sprite_t *sprite, mouse_t *first);
void mouse_animation(sprite_t *sprite, windowpause_t *win, mouse_t *mouse);

    /*init_pause*/

buttonpause_t *init_struct_buttonpause(sprite_t *sprite);
pause_t *init_struct_pause(sprite_t *sprite);
int mpause(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button);

    /*init_players*/

player1_t *init_struct_player(sprite_t *sprite);

    /*init_pnj*/

pnj_t *init_struct_pnj(sprite_t *sprite);
pnj_t *init_struct_pnj_text(sprite_t *sprite);

    /*button_menu*/

int draw_sp(sfRenderWindow *window, sprite_t *sprite, mouse_t *mouse);

    /*movements*/
void move_right(sprite_t *sprite, windowpause_t *window);
void move_right_bis(sprite_t *sprite, windowpause_t *window);
void move_left(sprite_t *sprite, windowpause_t *window);
void move_left_bis(sprite_t *sprite, windowpause_t *window);
void move_up(sprite_t *sprite, windowpause_t *window);
void move_up_bis(sprite_t *sprite, windowpause_t *window);
void move_down(sprite_t *sprite, windowpause_t *window);
void move_down_bis(sprite_t *sprite, windowpause_t *window);

    /*clock*/

void draws(sprite_t *sprite, windowpause_t *window);
void my_clock(sprite_t *sprite, windowpause_t
*window, mouse_t *mouse, button_t *button);
void my_clock_monster(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button);
void clocker(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button);

    /*destroy*/

void destroygame(sprite_t *sprite);

    /* settings*/

int my_settings(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button);

    /*over*/

void my_clock_over(sprite_t *sprite, windowpause_t *window);

    /*winn*/

void my_clock_winn(sprite_t *sprite, windowpause_t *window);


    /*menu*/

int my_menu(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button);

    /*player*/

void my_clock_player(sprite_t *sprite, windowpause_t *window,
mouse_t *mouse, button_t *button);

    /*pnj*/

void pnj_animation(sprite_t *sprite, windowpause_t *win);
void init_struct_pnj_press(sprite_t *sprite);
void text(sprite_t *sprite, windowpause_t *window);

int game(char **env);

    /*rpg*/

int rpg(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button);
int rpg_bis(mouse_t *mouse, windowpause_t *window,
sprite_t *sprite, button_t *button);
void plac_tower(mouse_t *mouse, windowpause_t *window, button_t *button);
void move_bis(sprite_t *sprite, windowpause_t *window);
char **my_str_to_word_array(char const *);
char *open_and_read(char *str);
int my_atoi(char *str);
void fill_doubletab(char, char **, char const *, int);
char **my_doubletab(char c, char const *);

#endif /* MY_H_ */