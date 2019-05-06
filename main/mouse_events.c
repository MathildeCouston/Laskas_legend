/*
** EPITECH PROJECT, 2018
** mouse_events
** File description:
** mouse events
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void analyse_dep(sfRenderWindow *window, sfEvent event, all_t all, status_t stat)
{
    all = all;
    stat.boy = 'N';
    // stat.talk = 'N';
    if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue) {
        stat.boy = 'l';
    } else if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue) {
        stat.boy = 'r';
    } else if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue) {
        stat.boy = 'd';
    } else if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue) {
        stat.boy = 'u';
    } else if (sfKeyboard_isKeyPressed(sfKeyA))
        stat.talk = 'o';
    else if (sfKeyboard_isKeyPressed(sfKeySpace))
        stat.talk = 'N';
    if (event.type == sfEvtClosed)
        close_window(window);
    // return (stat);
}

sfIntRect set_rect(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return (rect);
}

void analyse_events(sfRenderWindow *window, sfEvent event, all_t all)
{
    sfVector2f pos_view = {160, 152};

    all.game.boy.rect = set_rect(0, 0, 16, 31);
    all.game.boy_sea.rect = set_rect(15, 40, 30, 30);
    all.game.karim.rect = set_rect(0, 0, 40, 67);
    all.game.cham.rect = set_rect(80, 75, 18, 40);
    all.game.bub.rect = set_rect(94, 2, 252, 44);
    all.game.boy.mens.pos.x = 384;
    all.game.boy.mens.pos.y = 256;
    if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
        launch_game(all, window, pos_view);
    if (event.type == sfEvtClosed)
        close_window(window);
}