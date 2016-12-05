##
## Makefile for sudoki-bi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Apr 19 22:28:57 2013 louis-philippe baron
## Last update Sun Apr 21 17:40:36 2013 louis-philippe baron
##

## Etape 1
SRC1=		etape1/main.c \
		etape1/get_next_line.c \
		etape1/show_file.c \
		etape1/free.c \
		etape1/get_file.c \
		etape1/check_validity.c \
		etape1/check_content.c \
		etape1/clean_file.c \
		etape1/algo.c \
		etape1/cross_over.c \
		etape1/make_a_choice.c \
		etape1/line.c \
		etape1/col.c \
		etape1/square.c \
		etape1/check_pos.c \
		etape1/ret_pos.c

OBJ1=		$(SRC1:.c=.o)

NAME1=		etape1/sudoki-bi

## Etape 2
SRC2=		etape2/main.c \
		etape2/get_next_line.c \
		etape2/show_file.c \
		etape2/free.c \
		etape2/get_file.c \
		etape2/check_validity.c \
		etape2/check_content.c \
		etape2/check_length.c \
		etape2/clean_file.c \
		etape2/algo.c \
		etape2/cross_over.c \
		etape2/make_a_choice.c \
		etape2/line.c \
		etape2/col.c \
		etape2/square.c \
		etape2/check_pos.c \
		etape2/ret_pos.c

OBJ2=		$(SRC2:.c=.o)

NAME2=		etape2/sudoki-bis

CFLAGS=		-g -Wall -Wextra

all:		$(NAME1) $(NAME2)

$(NAME1):	$(OBJ1)
		cc -o $(NAME1) $(OBJ1)

$(NAME2):	$(OBJ2)
		cc -o $(NAME2) $(OBJ2)

clean:
		rm -f $(OBJ1) $(OBJ2)

fclean:		clean
		rm -f $(NAME1) $(NAME2)

re:		fclean all
