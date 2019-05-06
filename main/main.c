/*
** EPITECH PROJECT, 2018
** main
** File description:
** main pokemon
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};
    sfEvent event;
    sfVector2f pos = {770, 200};
    all_t all;

    all = set_all_sprite(all);
    window = sfRenderWindow_create(video_mode, "MyWindow", sfDefaultStyle, NULL);
    if (!window)
        return EXIT_FAILURE;
    sfRenderWindow_setFramerateLimit(window, 40);
    while (sfRenderWindow_isOpen(window)) {
        all.begin.write = set_text(all, "PRESS SPACE TO START", "include/pokemon_pixel_font.ttf", pos, 50);
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_events(window, event, all);
        sfRenderWindow_drawSprite(window, all.begin.back.sprite, NULL);
        sfRenderWindow_drawText(window, all.begin.write.text, NULL);
        sfRenderWindow_display(window);
    }
    return (0);
}