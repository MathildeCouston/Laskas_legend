/*
** EPITECH PROJECT, 2018
** map_sprite
** File description:
** map_sprite
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

image_var_t set_sprite(image_var_t obj, char *fi, sfVector2f p, sfVector2f s, int top, int left)
{
    obj.rect.top = top;
    obj.rect.left = left;
    obj.rect.width = 16;
    obj.rect.height = 16;    
    obj.image = sfImage_createFromFile(fi);
    obj.texture = sfTexture_createFromImage(obj.image, NULL);
    if (!obj.texture)
        exit(84);
    obj.sprite = sfSprite_create();
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setPosition(obj.sprite, p);
    sfSprite_setScale(obj.sprite, s);
    return (obj);
}

all_t set_all_sprite(all_t all)
{
    sfVector2f position = {0, 0};
    sfVector2f scale = {1, 1};
    sfVector2f scale_map = {1, 1};

    image_var_t grass = set_sprite(grass, "map/spritesheet.png", position, scale, 0, 0);    
    image_var_t upleft_roof = set_sprite(upleft_roof, "map/spritesheet.png", position, scale, 16, 0);    
    image_var_t uproof = set_sprite(uproof, "map/spritesheet.png", position, scale, 16, 16);    
    image_var_t upright_roof = set_sprite(upright_roof, "map/spritesheet.png", position, scale, 16, 16 * 2);   
    image_var_t downleft_roof = set_sprite(downleft_roof, "map/spritesheet.png", position, scale, 16 * 2, 0);    
    image_var_t downroof = set_sprite(downroof, "map/spritesheet.png", position, scale, 16 * 2, 16 * 2);    
    image_var_t downright_roof = set_sprite(downright_roof, "map/spritesheet.png", position, scale, 16 * 2, 16 * 3);   
    return (all);
}