##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_ls.c		\
		src/my_putchar.c\
		src/my_putstr.c

MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

ERROR	=	-Wall -Wextra

CFLAGS	=	-I./include -g

NAME	=	my_ls

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

.PHONY: all re fclean clean