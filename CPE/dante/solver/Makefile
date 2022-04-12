##
## EPITECH PROJECT, 2019
## CPE_dante_2019
## File description:
## Makefile
##

SRC	=	src/solver.c

LIB	=	lib/my_display.c	\
		lib/my_printf.c 	\

MAIN	=	src/main.c

CFLAGS	=	-g -I./include

OBJ	=	$(MAIN:.c=.o) $(SRC:.c=.o) $(LIB:.c=.o)

NAME	=	solver

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

all: $(NAME)

tests_run:
	@rm -f *.gcda *.gcno
	gcc -o unit_tests $(SRC) $(LIB) tests/*.c $(CFLAGS) --coverage -lcriterion
	./unit_tests
	rm -f unit_tests
	rm -f test_*

coverage:
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

clean:
	rm -f $(OBJ)
	@rm -f *.gc*

fclean:	clean
	rm -f $(NAME)

re: fclean all