##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/gnl.c	\
		lib/my_putstr.c 	\
		lib/my_putchar.c	\
		lib/my_strcat.c		\
		lib/my_strlen.c

MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

ERROR	=	-Wall -Wextra

CFLAGS	=	-I include -g

NAME	=	getnextline

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
		@rm -f include/*.h~
		@rm -f src/*.c~
		@rm -f Tests/*.c~

fclean: 	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all	tests_run	coverage	clean	fclean	re