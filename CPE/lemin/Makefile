##
## EPITECH PROJECT, 2019
## CPE_matchstick_2019
## File description:
## Makefile
##

SRC	=	lib/my_printf.c	\
		lib/my_flag.c	\
		lib/my_putstr.c	\
		lib/my_put_nbr.c	\
		lib/my_putchar.c	\
		lib/my_put_nbru.c	\
		lib/my_strlen.c	\
		src/main.c	\
		src/str_to_word_array.c	\
		src/error_handling.c	\
		src/filetochar.c \
		src/algor.c	\
		lib/my_strcmp.c

CFLAGS	=	-I./include

TEST_SRC = tests/tests.c

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	lem_in

TEST_NAME = unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

tests_run:
	rm -f *.gc*
	gcc -o $(TEST_NAME) $(SRC) tests/*.c --coverage -lcriterion $(CFLAGS)
	./$(TEST_NAME)

coverage:
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

clean :
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_NAME)

debug:
	gcc -o $(NAME) $(SRC) -g $(CFLAGS)

re:	fclean all