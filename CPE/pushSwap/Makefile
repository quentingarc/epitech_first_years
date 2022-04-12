##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	= pushswap.c 	\
	  main.c 		\
	  initial.c 	\
	  my_getnbr.c	\
	  my_putchar.c	\
	  my_putnbr.c	\
	  my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	pushswap


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)
all:		$(NAME)

clean:
		rm -f $(OBJ)
		rm -f $(NAME)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all
