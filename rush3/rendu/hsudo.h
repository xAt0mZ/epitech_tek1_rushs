/*
** hsudo.h for sudoki-bi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:27:52 2013 louis-philippe baron
** Last update Sat Apr 20 01:20:06 2013 louis-philippe baron
*/

#ifndef	PROJET_H_
#define	PROJET_H_

#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>
#include	"hget_next_line.h"

#define	ERROR	(-1)

char		**get_file();
int		free_file(char **);
int		show_file(char **);
int		show_end(char **);

int		check_validity(char **);
int		check_content(char **);
int		clean_file(char **);

#endif
