##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

NAME =	pokemon

SRC =	main/main.c \
		main/set_sprite.c \
		main/mouse_events.c \
		main/text.c \
		game/launch_game.c \
		game/move.c \
		game/move_2.c \
		game/affich_maps.c \
		scripts/map.c \
		scripts/lab.c \
		scripts/lab_1.c \
		scripts/studio.c \
		scripts/epitech.c \
		scripts/epitech_1.c \
		scripts/epitech_2.c \
		scripts/epitech_3.c \
		scripts/karim_house.c \
		scripts/karim_2.c \

OBJ =	$(SRC:.c=.o)

CC =	gcc 

CFLAGS =        -W -Wall -Wextra -g3 -I./include

GRAPHFLAG =	 -lcsfml-graphics -lcsfml-system -lcsfml-window

RM =	rm -f

NAME2 =	src/*.gcno

NAME3 =	src/*.gcda

RULE =	all

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) $(CFLAGS) -o $(NAME) $(GRAPHFLAG)

clean:	
		$(RM) $(OBJ)
		$(RM) $(NAME2)
		$(RM) $(NAME3)

fclean:	clean
		$(RM) $(NAME)

re: fclean all
