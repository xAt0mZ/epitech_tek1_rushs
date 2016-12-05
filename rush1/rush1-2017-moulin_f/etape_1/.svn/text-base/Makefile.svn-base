##
## Makefile for rush1 in /home/baron_l//local/rendu/piscine/rush/rush1/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Nov 30 23:03:29 2012 louis-philippe baron
## Last update Sat Dec  1 14:19:37 2012 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		part1.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

NAME=		tko2-1

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
