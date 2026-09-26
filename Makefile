##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## make
##

SRC	=	src/count_words.c\
		src/load_file.c\
		src/free_tab.c\
		src/get_content.c\
		src/is_number.c\
		src/hangman.c

OBJ	=	$(SRC)

NAME	=	hangman

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g3 -lm -o $(NAME) $(OBJ)

clean:
	rm -f src/*~

fclean: clean
	rm -f $(NAME)

re: fclean all
