/*
** hsudo.h for sudoki-bi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:27:52 2013 louis-philippe baron
** Last update Sun Apr 21 17:32:13 2013 louis-philippe baron
*/

#ifndef		PROJET_H_
# define	PROJET_H_

#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>
#include	"hget_next_line.h"

#define	ERROR	(-1)

char		**get_file();
int		free_file(char **);
int		show_file(char **);
int		show_end(int **);
int		check_length(char **);
int		free_int(int **);

int		check_validity(char **);
int		check_content(char **);
int		**clean_file(char **);

int		line(int x, int y, int **empty_map);
int		col(int x, int y, int **empty_map);
int		square(int x, int y, int **empty_map);

int		check_pos(char temp[9][10], char number);
int		ret_pos(char *base);
int		is_pos(int block, int num);

int		check_line(int x, int y, int **empty_map);
int		check_col(int x, int y, int **empty_map);
int		check_square(int x, int y, int **empty_map);
int		check_simple_poss(int x, int y, int **empty_map);
int		check_end(int **empty_map);
int		finder(char *str, char to_find);
int		cross_over(int x, int y, int **empty_map);
void		free_map(int **to_free);
int		**duplicate(int **to_dup);
int		**make_a_choice(int **empty_map);
int		check_ending(int **empty_map);
int		**fill_map(int **empty_map);
int		loop(int **empty_map);

#endif
