##
## EPITECH PROJECT, 2019
## my_defender
## File description:
## Makefile
##

SRC	=	src/menu.c 				\
		src/init/init_main.c	\
		src/init/init_menu.c	\
		src/init/init_game.c 	\
		src/init/init_pause.c 	\
		src/init/init_inventory.c	\
		src/init/init_mouse.c	\
		src/init/init_particles.c	\
		src/init/init_pnj_txt.c	\
		src/rpg.c 				\
		src/init/init_settings.c	\
		src/settings.c			\
		src/rpg_bis.c			\
		src/pause.c 			\
		src/button_menu.c 		\
		src/init/init_pnj.c		\
		src/destroy_sprite.c 	\
		src/player_movements.c	\
		src/player_movements_bis.c	\
		src/init/init_monstre.c \
		src/init/init_player.c 	\
		src/player.c 			\
		src/over.c 				\
		src/init/init_over.c	\
		src/init/init_winn.c 	\
		src/winn.c 				\
		src/game.c 				\
		src/clock.c

DISP =		travailyann/src/utils.c					\
		travailyann/src/menu.c					\
		travailyann/src/parallax.c				\
		travailyann/src/event.c					\
		travailyann/src/buttons.c				\
		travailyann/src/player.c				\
		travailyann/src/map.c					\
		travailyann/src/init_rpg.c				\
		travailyann/src/utils_map.c				\
		travailyann/src/utils_player.c				\
		travailyann/src/init_map.c				\
		travailyann/src/utils_ennemy.c				\
		travailyann/src/big_ennemy.c				\
		travailyann/src/ennemy.c				\
		travailyann/lib/my/my_str_to_word_array.c		\
		travailyann/lib/my/my_isalphanum.c			\
		travailyann/lib/my/open_and_read.c			\
		travailyann/lib/my/my_doubletab.c			\
		travailyann/lib/my/utils_array.c			\
		travailyann/lib/my/my_getnbr.c             		\
		travailyann/lib/my/my_atoi.c				\
		travailyann/src/my_monsters.c				\
		travailyann/src/fontain.c				\
		travailyann/src/pnj.c

MAIN	=	src/main.c        \
			lib/my_display.c

CFLAGS	=	-g -I./include

COMPILE	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

OBJ	=	$(MAIN:.c=.o) $(SRC:.c=.o) $(DISP:.c=.o)

NAME	=	my_rpg

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(COMPILE) $(CFLAGS)

all: $(NAME)

tests_run:
	@rm -f *.gcda *.gcno
	gcc -o unit_tests $(SRC) tests/*.c $(CFLAGS) --coverage -lcriterion
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