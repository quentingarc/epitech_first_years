##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	src/game/init_map.c		\
			src/game/init_monster.c	\
			src/game/init_pause.c	\
			src/game/init_play.c	\
			src/game/init_sprite.c	\
			src/game/menu.c			\
			src/game/init_window.c	\
			src/game/my_defender.c		\
			src/game/pause.c				\
			src/tools/init_button.c	\
			src/tools/init_exit.c	\
			src/tools/init_mouse.c	\
			src/game/game.c 		\
			src/game/clock.c 		\
			src/game/destroy.c

MAIN	=	src/tools/main.c

OBJ		=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME 	=	my_defender

CFLAGS	=	-I./include -g

ERROR	=	-Wall -Wextra

LIBS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(ERROR) $(LIBS) $(CFLAGS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all


