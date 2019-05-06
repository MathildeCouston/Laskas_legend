/*
** EPITECH PROJECT, 2018
** move_2
** File description:
** move_2
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

timeRect_t time_set(timeRect_t time)
{
    time.tmp = sfClock_getElapsedTime(time.cloc);
    time.seconds = time.tmp.microseconds / 1000000.0;
    return (time);
}

all_t change_pos(all_t all, char d, int dep)
{
    if (d == 'l' && dep == -5) {
        // printf("x = %f\n", all.game.boy.mens.pos.x);
        // all.game.boy.mens.pos.x = all.game.boy.mens.pos.x - 10.5;
        all.game.boy.rect.left = 30;
    } else if (d == 'r' && dep == 5) {
        // all.game.boy.mens.pos.x = all.game.boy.mens.pos.x + 10.5;
        all.game.boy.rect.left = 90;
    } else if (d == 'd' && dep == 5) {
        // all.game.boy.mens.pos.y = all.game.boy.mens.pos.y + 10.5;
        all.game.boy.rect.left = 0;
    } else if (d == 'u' && dep == -5) {
        // all.game.boy.mens.pos.y = all.game.boy.mens.pos.y - 10.5;
        all.game.boy.rect.left = 60;
    }
    return (all);
}

all_t change_rect(all_t all, int count)
{
    if (count == 0)
        all.game.boy.rect.top = all.game.boy.rect.top + 30;
    else if (count == 1)
        all.game.boy.rect.top = all.game.boy.rect.top + 120;
    else if (count == 2)
        all.game.boy.rect.top = 0;
    return (all);
}

void affiche_boy(all_t all, sfRenderWindow *window, char d, int dep)
{
    timeRect_t time;
    int count = 0;
    sfVector2f pos_view = sfSprite_getPosition(all.game.boy.sprite);

    time.cloc = sfClock_create();
    sfSprite_setTextureRect(all.game.boy.sprite, all.game.boy.rect);
    time = time_set(time);
    if (count == 3) {
        all.game.boy.rect.top = 0;
        launch_game(all, window, pos_view);
    }
    sfRenderWindow_drawSprite(window, all.game.boy.sprite, NULL);
    if (time.seconds > 0.07) {
            sfClock_restart(time.cloc);
            all = change_rect(all, count);
            all = change_pos(all, d, dep);
            sfSprite_setTextureRect(all.game.boy.sprite, all.game.boy.rect);
            sfRenderWindow_drawSprite(window, all.game.boy.sprite, NULL);
            count++;
    }
    sfRenderWindow_drawSprite(window, all.game.boy.sprite, NULL);
    sfRenderWindow_display(window);
}