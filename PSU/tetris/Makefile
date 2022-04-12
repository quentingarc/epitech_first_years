##
## EPITECH PROJECT, 2020
## PSU_tetris_2019
## File description:
## Makefile
##

SRC	=	src/help.c		\
		src/map.c		\
		src/debugmod.c	\
		src/change_touch.c \
		src/tetriminos.c

LIB	=	lib/my_getnbr.c		\
		lib/my_strlen.c		\
		lib/my_put_nbr.c	\
		lib/my_putstr.c		\
		lib/my_putchar.c	\
		lib/my_flags.c		\
		lib/my_printf.c 	\
		lib/my_str_cmp.c 	\
		lib/my_strncpy.c 	\
		lib/my_strcat.c

MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o) $(LIB:.c=.o) $(MAIN:.c=.o)

ERROR	=	-Wall -Wextra

CPPFLAGS	=	-I./include

CFLAGS	=	-g

NAME	=	tetris

$(NAME):	$(OBJ)
	gcc -o $(NAME)  -l ncurses $(OBJ) $(CFLAGS)

all:	$(NAME)

tests_run:
	rm -f *.gcda *.gno
	gcc -o unit_tests $(SRC) tests/*.c $(CPPFLAGS) $(CFLAGS) --coverage -lcriterion
	./unit_tests
	rm -f unit_tests
	rm -f tests_*

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f *.gcda *.gno *.gcno
	rm -f unit_tests

coverage:
	gcovr --exclude tests/
	gcovr --exclude tests/ --branch

re:	fclean all