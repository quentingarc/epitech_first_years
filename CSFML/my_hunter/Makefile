##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_hunter.c	\
		src/ini_struct.c

MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME 	=	my_hunter

ERROR	=	-Wall -Wextra

LIBS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(ERROR) $(LIBS) -I include -g

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all


