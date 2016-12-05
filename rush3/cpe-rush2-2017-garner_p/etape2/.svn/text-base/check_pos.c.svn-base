/*
** check_pos.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Apr 21 17:22:38 2013 louis-philippe baron
** Last update Sun Apr 21 17:22:58 2013 louis-philippe baron
*/

#include	"hsudo.h"

int	check_ending(int **empty_map)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (check_line(j, i, empty_map) != 0 || check_col(j, i, empty_map) != 0 || check_square(j - (j % 3), i - (i % 3), empty_map) != 0)
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int	check_pos(char temp[9][10], char number)
{
  int	i;
  int	j;
  int	k;

  k = 0;
  j = 0;
  while (k < 9)
    {
      i = 0;
      while (i < 9)
	{
	  if (temp[k][i] == number)
	    j = j + 1;
	  i = i + 1;
	}
      k = k + 1;
    }
  if (j == 1)
    return (1);
  return (0);
}
