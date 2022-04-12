##
## EPITECH PROJECT, 2018
## makefile
## File description:
## copy the library and the my.h, and implements the clean rule
##

SRC	=	my_putstr.c			\
		my_putchar.c			\
		my_str_to_word_array.c		\
		my_isalphanum.c			\
		open_and_read.c			\
		my_doubletab.c			\
		utils_array.c			\
		my_getnbr.c             \
		my_atoi.c

OBJ	=	$(SRC:.c=.o)

LIB	=	map.h		\
		framebuffer.h	\
		my.h		\
		player.h	\
		ennemy.h

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ./../
	cp $(LIB) ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
