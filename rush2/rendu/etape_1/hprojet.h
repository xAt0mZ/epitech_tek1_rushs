/*
** hprojet.h for rush in /home/baron_l//local/rendu/projets/rush/rush2/rendu/etape_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar  3 19:06:35 2013 louis-philippe baron
** Last update Sun Mar  3 21:51:33 2013 louis-philippe baron
*/

#ifndef	PROJET_H_
#define	PROJET_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>

#include	"hget_next_line.h"

#define	ERROR	(-1)

typedef struct	s_list
{
  int		x;
  int		y;
}		t_list;

void		my_putchar(char);
void		my_putstr(char *);
int		my_getnbr(char *, int);
int		my_strcmp(char *, char *);

int		check_validity(char *);
int		check_file(t_list *, char **);

int		free_file(char **);
int		show_file(char **);

int		find_path(char **);

#endif
