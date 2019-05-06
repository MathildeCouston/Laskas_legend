/*
** EPITECH PROJECT, 2018
** move
** File description:
** move
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

void go_up(all_t all, sfRenderWindow *window)
{
    all.game.boy.rect.left = 60;
    affiche_boy(all, window, 'u', -5);
    launch_game(all, window, all.game.boy.mens.pos);
}

void go_down(all_t all, sfRenderWindow *window)
{
    all.game.boy.rect.left = 0;
    affiche_boy(all, window, 'd', 5);
    launch_game(all, window, all.game.boy.mens.pos);
}

void go_left(all_t all, sfRenderWindow *window)
{
    all.game.boy.rect.left = 30;
    affiche_boy(all, window, 'l', -5);
    launch_game(all, window, all.game.boy.mens.pos);
}

void go_right(all_t all, sfRenderWindow *window)
{
    all.game.boy.rect.left = 90;
    affiche_boy(all, window, 'r', 5);
    launch_game(all, window, all.game.boy.mens.pos);
}