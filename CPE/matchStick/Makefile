##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/matchstick.c		\
		lib/my_putchar.c		\
		lib/my_putstr.c			\
		lib/my_getnbr.c			\
		lib/my_str_isnum.c		\
		src/error.c         	\
		src/loading.c			\
		lib/printf/my_flags.c 	\
		lib/printf/my_printf.c 	\
		lib/printf/my_put_nbr.c	\
		src/irobot.c


MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

ERROR	=	-Wall -Wextra

CFLAGS	=	-I./include -g

NAME	=	matchstick

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(ERROR)  $(CFLAGS)

all:		$(NAME)

tests_run:
		rm -f *.gcda *.gno
		gcc -o unit_tests $(SRC) tests/*.c $(CFLAGS) --coverage -lcriterion
		./unit_tests
		rm -f unit_tests
		rm -f test_*

coverage:
		gcovr --exclude Tests/
		gcovr --exclude Tests/ --branches

clean:
		rm -f $(OBJ)
		rm -f $(NAME)
		rm -f *.gc*

fclean: 	clean
		rm -f $(NAME)

re:		fclean all