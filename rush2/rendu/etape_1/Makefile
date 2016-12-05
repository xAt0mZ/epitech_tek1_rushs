##
## Makefile for rush in /home/baron_l//local/rendu/projets/rush/rush2/rendu/etape_1
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Sun Mar  3 19:06:19 2013 louis-philippe baron
## Last update Sun Mar  3 21:47:36 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		get_next_line.c \
		check_validity.c \
		show_file.c \
		free_file.c \
		find_path.c

OBJ=		$(SRC:.c=.o)

NAME=		grimly

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
