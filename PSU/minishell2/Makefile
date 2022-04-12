##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/check_error.c		\
		src/minishell.c			\
		src/key_board.c 		\
		lib/my_putstr.c			\
		lib/my_putchar.c		\
		lib/printf/my_flags.c 	\
		lib/printf/my_printf.c 	\
		lib/printf/my_put_nbr.c	\
		lib/my_strcmp.c			\
		lib/my_strlen.c			\
		lib/my_strcat.c 		\
		src/made.c 				\
		src/my_cd.c 			\
		src/my_ls.c 			\
		src/my_env.c 			\
		src/my_unsetenv.c 		\
		src/compare.c 			\
		src/build_cd.c 			\
		lib/my_str_to_word_array.c

MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o) $(MAIN:.c=.o)

ERROR	=	-Wall -Wextra

CFLAGS	=	-I./include

NAME	=	mysh

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(ERROR)  $(CFLAGS)

all:	$(NAME)

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

re:	fclean all

.PHONY:	all	tests_run	coverage	clean	fclean	re