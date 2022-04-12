##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/delivery.c 	\
		src/my_flags.c	\
		src/my_printf.c	\
		src/my_put_unsigned_nb.c

OBJ	=	$(SRC:.c=.o)

ERROR	=	-Wall -Wextra

CFLAGS	=	-I include -g

NAME	=	my_printf

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(ERROR)  $(CFLAGS)

all:		$(NAME)

tests_run:
		gcc -o unit_tests $(SRC) Tests/*.c $(CFLAGS) --coverage -lcriterion
		./unit_tests
		rm -f unit_tests
		rm -f test_*

coverage:
		gcovr --exclude Tests/
		gcovr --exclude Tests/ --branches

clean:
		rm -f $(OBJ)
		rm -f $(NAME)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all