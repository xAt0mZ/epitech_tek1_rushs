/*
** hsudo.h for sudoki-bi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:27:52 2013 louis-philippe baron
** Last update Sun Apr 21 02:10:16 2013 louis-philippe baron
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

int	check_line(int x, int y, char **empty_map);
int	check_col(int x, int y, char **empty_map);
int	check_square(int x, int y, char **empty_map);
int	check_simple_poss(int x, int y, char **empty_map);
int	check_end(char **empty_map);
int	finder(char *str, char to_find);
int	cross_over(int x, int y, char **empty_map);
void	free_map(char **to_free);
char	**duplicate(char **to_dup);
char	**make_a_choice(char **empty_map, int depth);
int	check_ending(char **empty_map);
char	**fill_map(char **empty_map, int depth);

#endif
