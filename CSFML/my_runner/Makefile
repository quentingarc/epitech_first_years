##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_runner.c		\
		src/ini_struct.c	\
		lib/my_putstr.c		\
		lib/my_putchar.c	\
		src/help.c			\
		src/position.c

MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME 	=	my_runner

ERROR	=	-Wall -Wextra

LIBS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(ERROR) $(LIBS) -I include -g

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all


