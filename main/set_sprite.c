/*
** EPITECH PROJECT, 2018
** set_sprite
** File description:
** set sprite
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

image_var_t set_sprite(all_t all, char *fi, sfVector2f p, sfVector2f s)
{
    all.begin.back.image = sfImage_createFromFile(fi);
    all.begin.back.texture = sfTexture_createFromImage(all.begin.back.image, NULL);
    if (!all.begin.back.texture)
        exit(84);
    all.begin.back.sprite = sfSprite_create();
    sfSprite_setTexture(all.begin.back.sprite, all.begin.back.texture, sfTrue);
    sfSprite_setPosition(all.begin.back.sprite, p);
    sfSprite_setScale(all.begin.back.sprite, s);
    return (all.begin.back);
}

image_var_t set_boy(all_t all)
{
    all.game.boy.mens.pos.x = 384;
    all.game.boy.mens.pos.y = 256;
    all.game.boy.mens.scale.x = 1;
    all.game.boy.mens.scale.y = 1;
    all.game.boy = set_sprite(all, "include/boy.png", all.game.boy.mens.pos, all.game.boy.mens.scale);
    return (all.game.boy);
}

all_t set_all_sprite(all_t all)
{
    sfVector2f position = {0, 0};
    sfVector2f inventory = {0.9, 1.11};
    sfVector2f position_start = {430, 10};
    sfVector2f scale = {1, 1};    
    sfVector2f scale_letter = {0.04, 0.04};   
    sfVector2f pos_let = {180, 55};    
    sfVector2f scale_karim = {0.4, 0.4};
    sfVector2f scale_start = {1.3, 1.3};

    all.begin.back = set_sprite(all, "include/back_start.png", position_start, scale_start);
    all.game.map = set_sprite(all, "map/map_pokemon.png", position, scale);
    all.begin.map = set_sprite(all, "include/map.png", position, scale);
    all.game.stud = set_sprite(all, "map/sprite_inside.png", position, scale);
    position.x = 222;
    position.y = 60;
    all.game.karim = set_sprite(all, "include/karim.png", position, scale_karim);
    position.x = 336;
    position.y = 192;
    all.game.cham = set_sprite(all, "include/chamard.png", position, scale);
    position.x = 50;
    position.y = 123;
    scale.x = 1.38;  //3.17
    scale.y = 1.2;
    all.game.bub = set_sprite(all, "include/square.png", position, scale);
    all.game.boy = set_boy(all);
    all.game.boy_sea = set_sprite(all, "include/boy_sea.png", position, scale);
    all.game.inventory = set_sprite(all, "include/inventory.png", position, inventory);
    all.game.letter = set_sprite(all, "include/letter.png", pos_let, scale_letter);
    return (all);
}
