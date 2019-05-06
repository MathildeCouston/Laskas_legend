/*
** EPITECH PROJECT, 2018
** pokemon_main
** File description:
** pokemon
*/

#include <SFML/System.h>
#include <SFML/Window/Context.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/Joystick.h>
#include <SFML/Window/JoystickIdentification.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Sensor.h>
#include <SFML/Window/Touch.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Window/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Graphics/Export.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>


//define map walkable 

#define WALK(layer, i, j) (layer[i][j] == 1 || layer[i][j] == 12 || layer[i][j] == 93 || layer[i][j] == 3080 || \
                        layer[i][j] == 3081 || layer[i][j] == 3082 || layer[i][j] == 3168 || \
                        layer[i][j] == 3169 || layer[i][j] == 3170 || layer[i][j] == 3256 || \
                        layer[i][j] == 3257 || layer[i][j] == 3258 || layer[i][j] == 3258 || \
                        layer[i][j] == 3169 || layer[i][j] == 3170 || layer[i][j] == 5104 || \
                        layer[i][j] == 5105 || layer[i][j] == 5106 || layer[i][j] == 5192 || \
                        layer[i][j] == 5193 || layer[i][j] == 5194 || layer[i][j] == 5280 || \
                        layer[i][j] == 5281 || layer[i][j] == 5282 || layer[i][j] == 1688 || \
                        layer[i][j] == 1689 || layer[i][j] == 1690 || layer[i][j] == 1776 || \
                        layer[i][j] == 1777 || layer[i][j] == 1778 || layer[i][j] == 1864 || \
                        layer[i][j] == 1865 || layer[i][j] == 1866 || layer[i][j] == 3080 || \
                        layer[i][j] == 3081 || layer[i][j] == 3082 || layer[i][j] == 3168 || \
                        layer[i][j] == 3169 || layer[i][j] == 3170 || layer[i][j] == 3256 || \
                        layer[i][j] == 3257 || layer[i][j] == 3258 || layer[i][j] == 3448 || \
                        layer[i][j] == 3449 || layer[i][j] == 3450 || layer[i][j] == 3536 || \
                        layer[i][j] == 3537 || layer[i][j] == 3538 || layer[i][j] == 4048 || \
                        layer[i][j] == 2291 || layer[i][j] == 2292 || layer[i][j] == 2)

const int layer[100][108];
const int studio[7][7];
const int lab[13][24];
const int lab_1[13][24];
const int karim_house[10][10];
const int karim_2[10][7];
const int epitech_1[20][30];
const int epitech_2[20][30];
const int epitech_3[15][20];
const int epitech[20][30];

typedef struct status
{
    char boy;
    char talk;
    char house;
    char keep;
    int letter;
} status_t;

typedef struct timeRect
{
    float seconds;
    sfClock *cloc;
    sfTime tmp;
} timeRect_t;

typedef struct mens
{
    sfVector2f pos;
    sfVector2f scale;
} mens_t;

typedef struct image_var
{
    sfTexture* texture;
    sfSprite* sprite;
    sfImage* image;
    sfIntRect rect;
    mens_t mens;
    int col[100][100];
} image_var_t;

typedef struct writting
{
    sfText *text;
    sfFont *font;
    sfVector2f pos;
} writting_t;

typedef struct spritesheet
{
    image_var_t back;
    image_var_t map;
    image_var_t stud;
    image_var_t boy;
    image_var_t boy_sea;
    image_var_t inventory;
    image_var_t bub;
    image_var_t karim;
    image_var_t cham;    
    image_var_t letter;    
    writting_t karim1;
    writting_t cham1;
    writting_t write;
    writting_t inscript;
    writting_t studio;    
    writting_t aff_invent;    
    writting_t title;
} spritesheet_t;

typedef struct all
{
    spritesheet_t begin;
    spritesheet_t game;    
} all_t;

//main
image_var_t set_sprite(all_t all, char *fi, sfVector2f p, sfVector2f s);
all_t set_all_sprite(all_t all);
image_var_t set_boy(all_t all);
writting_t set_text(all_t all, char *str, char *text, sfVector2f pos, int car);

//events
void analyse_events(sfRenderWindow *window, sfEvent event, all_t all);
void analyse_dep(sfRenderWindow *window, sfEvent event, all_t all, status_t stat);

//game
void launch_game(all_t all, sfRenderWindow *window, sfVector2f pos_view);

// move boy
void go_up(all_t all, sfRenderWindow *window);
void go_right(all_t all, sfRenderWindow *window);
void go_left(all_t all, sfRenderWindow *window);
void go_down(all_t all, sfRenderWindow *window);
void affiche_boy(all_t all, sfRenderWindow *window, char d, int dep);
all_t change_rect(all_t all, int count);
all_t change_pos(all_t all, char d, int dep);
timeRect_t time_set(timeRect_t time);

//talking
int karim(all_t all, sfRenderWindow *window, status_t stat);

//maps
void affich_maps(all_t all, sfRenderWindow *window, status_t stat);