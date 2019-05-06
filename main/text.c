/*
** EPITECH PROJECT, 2018
** text
** File description:
** text
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

writting_t set_text(all_t all, char *str, char *text, sfVector2f pos, int car)
{
    writting_t write;

    all = all;
    write.font = sfFont_createFromFile(text);
    write.text = sfText_create();
    sfText_setFont(write.text, write.font);
    sfText_setCharacterSize(write.text, car);
    sfText_setPosition(write.text, pos);
    sfText_setString(write.text, str);
    return (write);
}