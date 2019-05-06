/*
** EPITECH PROJECT, 2018
** launch_game
** File description:
** launch game
*/

#include <SFML/Graphics.h>
#include "pokemon_main.h"

int karim(all_t all, sfRenderWindow *window, status_t stat)
{
    // printf("left = %d\npos x = %f\npos y = %f\n\n", all.game.boy.rect.left, \
    all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
    if (all.game.boy.rect.left == 60 && stat.talk == 'o' \
    && all.game.boy.mens.pos.x <= 230 && all.game.boy.mens.pos.x >= 215 \
    && all.game.boy.mens.pos.y <= 85 && all.game.boy.mens.pos.y >= 60 \
    && all.game.boy.rect.top == 0)
        return (1);
    return (0);
}

int letter(all_t all, sfRenderWindow *window, status_t stat)
{
    // printf("left = %d\npos x = %f\npos y = %f\n\n", all.game.boy.rect.left, \
    // all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
    // printf("LETTER    \n\n");
    if (all.game.boy.rect.left == 60 && stat.talk == 'o' \
    && all.game.boy.mens.pos.x <= 190 && all.game.boy.mens.pos.x >= 170 \
    && all.game.boy.mens.pos.y <= 70 && all.game.boy.mens.pos.y >= 50 \
    && all.game.boy.rect.top == 0)
        return (1);
    return (0);
}

int studio_check(all_t all, sfRenderWindow *window, status_t stat)
{
    // printf("left = %d\npos x = %f\npos y = %f\n\n", all.game.boy.rect.left, \
    all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
    if (all.game.boy.rect.left == 60 && stat.talk == 'o' \
    && all.game.boy.mens.pos.x <= 150 && all.game.boy.mens.pos.x >= 140 \
    && all.game.boy.mens.pos.y <= 110 && all.game.boy.mens.pos.y >= 105 \
    && all.game.boy.rect.top == 0)
        return (1);
    return (0);
}

int karim_house_check(all_t all, sfRenderWindow *window, status_t stat)
{
    // printf("left = %d\npos x = %f\npos y = %f\n\n", all.game.boy.rect.left, \
    all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
    if (all.game.boy.rect.left == 60 && stat.talk == 'o' \
    && all.game.boy.mens.pos.x <= 290 && all.game.boy.mens.pos.x >= 280 \
    && all.game.boy.mens.pos.y <= 65 && all.game.boy.mens.pos.y >= 55 \
    && all.game.boy.rect.top == 0)
        return (1);
    return (0);
}

int cham_check(all_t all, sfRenderWindow *window, status_t stat)
{
    // printf("left = %d\npos x = %f\npos y = %f\n\n", all.game.boy.rect.left, \
    all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
    if (all.game.boy.rect.left == 90 && stat.talk == 'o' \
    && all.game.boy.mens.pos.x <= 325 && all.game.boy.mens.pos.x >= 305 \
    && all.game.boy.mens.pos.y <= 210 && all.game.boy.mens.pos.y >= 190 \
    && all.game.boy.rect.top == 0)
        return (1);
    return (0);
}

int lab_check(all_t all, sfRenderWindow *window, status_t stat)
{
    // printf("left = %d\npos x = %f\npos y = %f\n\n", all.game.boy.rect.left, \
    all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
    if (all.game.boy.rect.left == 60 && stat.talk == 'o' \
    && all.game.boy.mens.pos.x <= 183 && all.game.boy.mens.pos.x >= 174 \
    && all.game.boy.mens.pos.y <= 335 && all.game.boy.mens.pos.y >= 330 \
    && all.game.boy.rect.top == 0)
        return (1);
    return (0);
}

all_t deplacement(int count, char d, all_t all, int dep, sfRenderWindow *window)
{
    // sfClock_restart(temp.cloc);
    all = change_rect(all, count);
    all = change_pos(all, d, dep);
    sfSprite_setTextureRect(all.game.boy.sprite, all.game.boy.rect);
    return (all);
}

void launch_game(all_t all, sfRenderWindow *window, sfVector2f pos_view)
{
    sfEvent event;
    sfFloatRect r_view = {70, 100, 700, 395};
    sfVector2f move_view = {0, 0};
    sfView *view;
    sfVector2f pos_text = {57, 125};
    sfVector2f pos_bub = {57, 125};
    int a = 0;
    int x = 0;
    int y = 0;
    static int sea = 0;
    sfVector2f invenp = {0, 0};
    sfVector2f pos_invent = {280, 60};
    sfVector2f seap = {0, 0};
    sfVector2f seas = {0.9, 0.9};
    float t0 = 0;
    status_t stat;
    timeRect_t temp;
    timeRect_t t_view;
    int count_boy = 0;
    stat.boy = 'N';

    static int pokeballs = 0;
    static int inscription = 0;
    static int quest = 0;
    static int cham_talk = 0;
    stat.letter = 0;

    view = sfView_createFromRect(r_view);
    temp.cloc = sfClock_create();
    t_view.cloc = sfClock_create();


    sfSprite_setTextureRect(all.game.boy.sprite, all.game.boy.rect);
    sfSprite_setTextureRect(all.game.boy_sea.sprite, all.game.boy_sea.rect);
    sfSprite_setTextureRect(all.game.karim.sprite, all.game.karim.rect);
    sfSprite_setTextureRect(all.game.cham.sprite, all.game.cham.rect);
    sfSprite_setTextureRect(all.game.bub.sprite, all.game.bub.rect);
    sfView_setCenter(view, pos_view);

    sfView_zoom(view, 0.5);

    stat.house = 'o';
    stat.keep = 'o';
    // sfVector2f ret = {16, 32};
    // sfRectangleShape *re = sfRectangleShape_create();
    // sfRectangleShape_setSize(re, ret);
    // sfRectangleShape_setFillColor(re, sfRed);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);

    while (sfRenderWindow_isOpen(window)) {
        sfView_move(view, move_view);     
        sfRenderWindow_setView(window, view);
        sfRenderWindow_clear(window, sfBlack);
        temp = time_set(temp);
        t_view = time_set(t_view);



        // TALK EVENTS SETTINGS

        sfVector2f vw_pos = sfView_getCenter(view);
        pos_text.x = vw_pos.x - 164;
        pos_text.y = vw_pos.y + 47;
        pos_bub.x = vw_pos.x - 174;
        pos_bub.y = vw_pos.y + 45;
        pos_invent.x = vw_pos.x + 117;
        pos_invent.y = vw_pos.y - 93;
        sfSprite_setPosition(all.game.bub.sprite, pos_bub);

        if (inscription == 0) {
            all.game.karim1 = set_text(all, "KARIM :  Hello  young  trainer,  I  am  Karim  your  master.  Please  go  find  your\ninscription  file  so  we  can  start  your  adventure.\n\n(press  space)",\
            "include/pokemon_pixel_font.ttf", pos_text, 12);
            sfText_setColor(all.game.karim1.text, sfBlack);
        } else if (inscription != 0) {
            cham_talk = 2;
            all.game.karim1 = set_text(all, "KARIM :  Nice.  Now  you  need  to  choose  your  first  pokemon.  Go  to  my  lab\ndown  the  road,  I'll  meet  you  there.\n\n(press  space)",\
            "include/pokemon_pixel_font.ttf", pos_text, 12);
            sfText_setColor(all.game.karim1.text, sfBlack);
        }
        if (cham_talk == 0) {
            all.game.cham1 = set_text(all, "CB :  Hey  trainer.  I'm  CHAMARD-BOIS .  Being  in  my  3rd  year  of  training  with\nKarim,  I  will  help  you  and  be  your  friend.  Come  ask  for  help  anytime.\n\n(press  space)",\
            "include/pokemon_pixel_font.ttf", pos_text, 12);
            sfText_setColor(all.game.cham1.text, sfBlack);
        } else if (cham_talk == 1) {
            all.game.cham1 = set_text(all, "CB :  If  you  want  to  find  your  inscription,  just  go  look  in  your  room,  \nmaybe  it  is  there  !\n\n(press  space)",\
            "include/pokemon_pixel_font.ttf", pos_text, 12);
            sfText_setColor(all.game.cham1.text, sfBlack);
        } else if (cham_talk == 2) {
            all.game.cham1 = set_text(all, "CB :  Congratulation  for  your  first  quest.  Go  choose  your  pokemon  and  \ncome  back  for  our  first  battle  !\n\n(press  space)",\
            "include/pokemon_pixel_font.ttf", pos_text, 12);
            sfText_setColor(all.game.cham1.text, sfBlack);
        }
        all.game.inscript = set_text(all, "\nYou  obtained  ' INSCRIPTION  LETTER '.  Go  give  it  to  KARIM.\n\n(press  space)",\
        "include/pokemon_pixel_font.ttf", pos_text, 12);
        sfText_setColor(all.game.inscript.text, sfBlack); 

        if (pokeballs == 0 && inscription == 0) {
            all.game.aff_invent = set_text(all, "  INVENTORY\n\n\n\n       Empty",\
            "include/pokemon_pixel_font.ttf", pos_invent, 13);
            sfText_setColor(all.game.aff_invent.text, sfBlack);
        } else if (pokeballs != 0 && inscription == 0) {
            all.game.aff_invent = set_text(all, "  INVENTORY\n\n\nx 3   PokeB",\
            "include/pokemon_pixel_font.ttf", pos_invent, 13);
            sfText_setColor(all.game.aff_invent.text, sfBlack);
        } else if (pokeballs == 0 && inscription != 0) {
            all.game.aff_invent = set_text(all, "  INVENTORY\n\n\nx 1   File",\
            "include/pokemon_pixel_font.ttf", pos_invent, 13);
            sfText_setColor(all.game.aff_invent.text, sfBlack);
        } else if (pokeballs != 0 && inscription != 0) {
            all.game.aff_invent = set_text(all, "  INVENTORY\n\n\nx 3   PokeB\n\nx 1   File",\
            "include/pokemon_pixel_font.ttf", pos_invent, 13);
            sfText_setColor(all.game.aff_invent.text, sfBlack);
        }

        // HOUSE EVENTS
        all.game.studio = set_text(all, "Do  you  want  to  go  inside  this  house  ?\n\nYes  :  press  enter\nNo     :  press  space\n",\
        "include/pokemon_pixel_font.ttf", pos_text, 12);
        sfText_setColor(all.game.studio.text, sfBlack);


        // EVENTS

        while (sfRenderWindow_pollEvent(window, &event)) {
            analyse_dep(window, event, all, stat);
            if (sfKeyboard_isKeyPressed(sfKeyReturn) \
            && studio_check(all, window, stat) == 1 && stat.talk != 'N') {
                stat.house = 's';
                stat.talk = 'N';
            }
            if (sfKeyboard_isKeyPressed(sfKeyReturn) \
            && karim_house_check(all, window, stat) == 1 && stat.talk != 'N') {
                stat.house = 'k';
                stat.talk = 'N';
            }
            if (sfKeyboard_isKeyPressed(sfKeyReturn) \
            && lab_check(all, window, stat) == 1 && stat.talk != 'N') {
                stat.house = 'l';
                stat.talk = 'N';
            }
            if (sfKeyboard_isKeyPressed(sfKeyI))
                stat.talk = 'i';
        }
        if (stat.boy == 'N') {
            if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue) {
                stat.boy = 'l';
            } else if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue) {
                stat.boy = 'r';
            } else if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue) {
                // printf("down\n");
                stat.boy = 'd';
            } else if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue) {
                stat.boy = 'u';
            }
        }
        if (sfKeyboard_isKeyPressed(sfKeyA))
            stat.talk = 'o';
        else if (sfKeyboard_isKeyPressed(sfKeySpace) && stat.talk != 'N') {
            stat.talk = 'N';
        }

        if (stat.house == 's') {
            stat.keep = 's';
            // stat.talk = 'N';
        }
        if (stat.house == 'k') {
            stat.keep = 'k';
            // stat.talk = 'N';
        }
        if (stat.house == 'l') {
            stat.keep = 'l';
            // stat.talk = 'N';
        }
        if (all.game.boy.mens.pos.x <= 160 && all.game.boy.mens.pos.x >= 130 && all.game.boy.mens.pos.y >= 120 && stat.keep == 's') {
            stat.keep = 'o';
            stat.house = 'o';
        } else if (all.game.boy.mens.pos.x <= 299 && all.game.boy.mens.pos.x >= 280 && all.game.boy.mens.pos.y >= 65 && stat.keep == 'k') {
            stat.keep = 'o';
            stat.house = 'o';
        } else if (all.game.boy.mens.pos.x <= 199 && all.game.boy.mens.pos.x >= 170 && all.game.boy.mens.pos.y >= 335 && stat.keep == 'l') {
            stat.keep = 'o';
            stat.house = 'o';
        }

        // BOY DEPLACEMENT 

        if (stat.boy == 'N') {
            all.game.boy.rect.top = 0;
        }
        move_view.x = 0;
        move_view.y = 0;
        x = all.game.boy.mens.pos.x;
        y = all.game.boy.mens.pos.y;
        if (stat.talk != 'o' && stat.talk != 'i' && stat.boy == 'l'
        && (WALK(layer, ((y + 12) / 16), ((x / 16))) || stat.keep != 'o')) {
            move_view.x = -2;
            all.game.boy_sea.rect.left = 95;
            all.game.boy.rect.left = 30;
            if (count_boy == 3) {
                all.game.boy.rect.top = 0;
                all.game.boy.rect.left = 30;
                stat.boy = 'N';
                count_boy = 0;
            }
            if (temp.seconds > 0.07) {
                // move_view.x = -2;
                sfClock_restart(temp.cloc);
                all = deplacement(count_boy, 'l', all, -5, window);
                count_boy++;
            }
        } else if (stat.talk != 'o' && stat.talk != 'i' && stat.boy == 'r' \
        && (WALK(layer, ((y) / 16) + 1, ((x / 16) + 1)) || stat.keep != 'o')) {
            move_view.x = 2;
            all.game.boy_sea.rect.left = 69;
            all.game.boy.rect.left = 90;
            if (count_boy == 3) {
                all.game.boy.rect.top = 0;
                all.game.boy.rect.left = 90;
                stat.boy = 'N';
                count_boy = 0;
            }
            if (temp.seconds > 0.07) {
                // move_view.x = 2;
                sfClock_restart(temp.cloc);
                all = deplacement(count_boy, 'r', all, 5, window);
                count_boy++;
            }
        } else if (stat.talk != 'o' && stat.talk != 'i' && stat.boy == 'd'\
         && (WALK(layer, (((y) / 16) + 1), (x / 16)) || stat.keep != 'o')) {
            move_view.y = 2;
            all.game.boy_sea.rect.left = 10;
            all.game.boy.rect.left = 0;
            if (count_boy == 3) {
                all.game.boy.rect.top = 0;
                all.game.boy.rect.left = 0;
                stat.boy = 'N';
                count_boy = 0;
            }
            // printf("a \n");
            if (temp.seconds > 0.07) {
                // move_view.y = 2;
                sfClock_restart(temp.cloc);
                all = deplacement(count_boy, 'd', all, 5, window);
                count_boy++;
            }
        } else if (stat.talk != 'o' && stat.talk != 'i' && stat.boy == 'u' \
        && (WALK(layer, (((y) / 16)), (x / 16)) || stat.keep != 'o')) {
            move_view.y = -2;
            all.game.boy_sea.rect.left = 40;
            all.game.boy.rect.left = 60;
            if (count_boy == 3) {
                all.game.boy.rect.top = 0;
                all.game.boy.rect.left = 60;
                stat.boy = 'N';
                count_boy = 0;
            }
            if (temp.seconds > 0.07) {
                // move_view.y = -2;
                sfClock_restart(temp.cloc);
                all = deplacement(count_boy, 'u', all, -5, window);
                count_boy++;
            }
        } else {
            move_view.x = 0;
            move_view.y = 0;
            all.game.boy.rect.top = 0;
            stat.boy = 'N';
            count_boy = 0;
        }
        sfSprite_setTextureRect(all.game.boy.sprite, all.game.boy.rect);


        // MAP AFFICHAGE

        affich_maps(all, window, stat);


        // MOVE VIEW


        sfVector2f vw = sfView_getCenter(view);
        all.game.boy.mens.pos.x = vw.x;
        all.game.boy.mens.pos.y = vw.y;
        // printf("x = %f\ny = %f\n\n", all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
        // sfRectangleShape_setPosition(re, all.game.boy.mens.pos);
        sfSprite_setPosition(all.game.boy.sprite, all.game.boy.mens.pos);
        x = all.game.boy.mens.pos.x;
        y = all.game.boy.mens.pos.y;

        // if (t_view.seconds > 0.07 && (x % 16 != 0 || y % 16 != 0)) {
        //     sfClock_restart(t_view.cloc);
        //     sfVector2f vw = sfView_getCenter(view);
        //     all.game.boy.mens.pos.x = 16 - (x % 16) + x;
        //     all.game.boy.mens.pos.y = 16 - (y % 16) + y;
        //     // printf("x = %f\ny = %f\n\n", all.game.boy.mens.pos.x, all.game.boy.mens.pos.y);
        //     // sfRectangleShape_setPosition(re, all.game.boy.mens.pos);
        //     sfSprite_setPosition(all.game.boy.sprite, all.game.boy.mens.pos);
        // }
        
        if (all.game.boy.mens.pos.x >= 1373 && all.game.boy.mens.pos.y <= 407 && all.game.boy.mens.pos.x <= 1534 && all.game.boy.mens.pos.y >= 62)
            sea = 1;
        else
            sea = 0;
        
        // LAST DISPLAY

        if (karim(all, window, stat) == 1 && stat.talk != 'N') {
            cham_talk = 1;
            sfRenderWindow_drawSprite(window, all.game.bub.sprite, NULL);
            sfRenderWindow_drawText(window, all.game.karim1.text, NULL);
        }
        if ((studio_check(all, window, stat) == 1 || karim_house_check(all, window, stat) == 1 \
         || lab_check(all, window, stat) == 1) && stat.talk != 'N') {
            sfRenderWindow_drawSprite(window, all.game.bub.sprite, NULL);
            sfRenderWindow_drawText(window, all.game.studio.text, NULL);
        }
        if (cham_check(all, window, stat) == 1) {
            sfRenderWindow_drawSprite(window, all.game.bub.sprite, NULL);
            sfRenderWindow_drawText(window, all.game.cham1.text, NULL);
        }
        // printf("keep = %c et house = %c et talk = %c\n\n", stat.keep, stat.house, stat.talk);
        if (letter(all, window, stat) == 1) {
            stat.letter = 1;
            inscription = 1;
            sfRenderWindow_drawSprite(window, all.game.bub.sprite, NULL);
            sfRenderWindow_drawText(window, all.game.inscript.text, NULL);
        }
        if (stat.keep == 'o') {
            sfRenderWindow_drawSprite(window, all.game.karim.sprite, NULL);
            sfRenderWindow_drawSprite(window, all.game.cham.sprite, NULL);
        }
        // printf("talk = %c\n", stat.talk);
        if (stat.talk == 'i') {
            invenp.x = all.game.boy.mens.pos.x + 20;
            invenp.y = all.game.boy.mens.pos.y - 100;
            sfSprite_setPosition(all.game.inventory.sprite, invenp);
            sfRenderWindow_drawSprite(window, all.game.inventory.sprite, NULL);
            sfRenderWindow_drawText(window, all.game.aff_invent.text, NULL);
        }
        // sfRenderWindow_drawRectangleShape(window, re, NULL);
        if (sea == 0)  
            sfRenderWindow_drawSprite(window, all.game.boy.sprite, NULL); 
        else if (sea == 1) {
            seap.x = all.game.boy.mens.pos.x - 4;
            seap.y = all.game.boy.mens.pos.y;
            sfSprite_setTextureRect(all.game.boy_sea.sprite, all.game.boy_sea.rect);
            sfSprite_setPosition(all.game.boy_sea.sprite, seap);
            sfSprite_setScale(all.game.boy_sea.sprite, seas);
            sfRenderWindow_drawSprite(window, all.game.boy_sea.sprite, NULL); 
        }
        sfRenderWindow_display(window);
    }
}