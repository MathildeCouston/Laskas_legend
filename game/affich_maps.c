/*
** EPITECH PROJECT, 2019
** affich_maps
** File description:
** affichage maps
*/

#include "pokemon_main.h"

void affich_maps(all_t all, sfRenderWindow *window, status_t stat)
{
    sfIntRect rect_map = {0, 0, 32, 32};
    sfVector2f pos_map = {0, 0};
    sfVector2f scale_map = {2, 2};

    if (stat.keep == 'o') {  // map
        sfRenderWindow_clear(window, sfBlack);
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 108; j++) {
                rect_map.top = (layer[i][j] / 87) * 16;
                rect_map.left = ((layer[i][j]) % 88) * 16;
                pos_map.x = j * 16;
                pos_map.y = i * 16;
                sfSprite_setPosition(all.game.map.sprite, pos_map);
                sfSprite_setTextureRect(all.game.map.sprite, rect_map);
                sfRenderWindow_drawSprite(window, all.game.map.sprite, NULL);
            }
        }
    } else if (stat.keep == 's') {  // studio
        sfRenderWindow_clear(window, sfBlack);
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                rect_map.top = (studio[i][j] / 191) * 16;
                rect_map.left = ((studio[i][j]) % 192) * 16;
                pos_map.x = j * 16 + 120;
                pos_map.y = i * 16 + 20;
                sfSprite_setPosition(all.game.stud.sprite, pos_map);
                sfSprite_setTextureRect(all.game.stud.sprite, rect_map);
                sfRenderWindow_drawSprite(window, all.game.stud.sprite, NULL);
            }
        }
        if (stat.letter == 0)
            sfRenderWindow_drawSprite(window, all.game.letter.sprite, NULL);
    } else if (stat.keep == 'k') {  // karim house
        sfRenderWindow_clear(window, sfBlack);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                rect_map.top = (karim_house[i][j] / 191) * 16;
                rect_map.left = ((karim_house[i][j]) % 192) * 16;
                pos_map.x = j * 16 + 268;
                pos_map.y = i * 16 - 70;
                sfSprite_setPosition(all.game.stud.sprite, pos_map);
                sfSprite_setTextureRect(all.game.stud.sprite, rect_map);
                sfRenderWindow_drawSprite(window, all.game.stud.sprite, NULL);
            }
        }
    } else if (stat.keep == 'K') {  // karim house2
        sfRenderWindow_clear(window, sfBlack);
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 7; j++) {
                rect_map.top = (karim_2[i][j] / 191) * 16;
                rect_map.left = ((karim_2[i][j]) % 192) * 16;
                pos_map.x = j * 16;
                pos_map.y = i * 16;
                sfSprite_setPosition(all.game.stud.sprite, pos_map);
                sfSprite_setTextureRect(all.game.stud.sprite, rect_map);
                sfRenderWindow_drawSprite(window, all.game.stud.sprite, NULL);
            }
        }
    } else if (stat.keep == 'l') {  // lab
        sfRenderWindow_clear(window, sfBlack);
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 23; j++) {
                rect_map.top = (lab[i][j] / 191) * 16;
                rect_map.left = ((lab[i][j]) % 192) * 16;
                pos_map.x = j * 16 + 40;
                pos_map.y = i * 16 + 145;
                sfSprite_setPosition(all.game.stud.sprite, pos_map);
                sfSprite_setTextureRect(all.game.stud.sprite, rect_map);
                sfRenderWindow_drawSprite(window, all.game.stud.sprite, NULL);
            }
        }
    }
}
