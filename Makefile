##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## make
##

SRC	=	src/my_putchar.c\
		src/my_putstr.c	\
		src/my_put_nbr.c\
		src/my_strlen.c	\
		src/double_tab.c\
		src/get_columns.c\
		src/get_lines.c	\
		src/usage.c\
		src/mini_printf.c\
		src/display_map.c\
		src/display_tab.c\
		src/get_player_pos.c\
		src/move_player.c\
		src/check_file.c\
		src/get_o.c\
		src/my_sokoban.c

OBJ	=	$(SRC)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -lncurses -o $(NAME) $(OBJ) -g3

clean:
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
