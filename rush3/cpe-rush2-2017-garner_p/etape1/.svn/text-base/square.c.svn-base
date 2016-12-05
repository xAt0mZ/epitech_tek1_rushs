/*
** square.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Apr 21 17:18:36 2013 louis-philippe baron
** Last update Sun Apr 21 18:00:39 2013 louis-philippe baron
*/

#include	"hsudo.h"

int	check_square(int x, int y, int **empty_map)
{
  char	base[9];
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      base[i] = i + 1;
      i = i + 1;
    }
  i = 0;
  while (i < 3)
    {
      j = 0;
      while (j < 3)
	{
	  if (empty_map[y + i][x + j] < 10 && empty_map[y + i][x + j] > 0)
	    base[empty_map[y + i][x + j] - 1] = 0;
	  j = j + 1;
	}
      i = i + 1;
    }
  return (ret_pos(base));
}

int	square(int x, int y, int **empty_map)
{
  char	temp[9][10] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
  int	i;
  int	j;
  int	k;
  int	born_x;
  int	born_y;

  born_x = x - (x % 3);
  born_y = y - (y % 3);
  i = 0;
  k = 0;
  while (i < 3)
    {
      j = 0;
      while (j < 3)
	{
	  sprintf(temp[k], "%d", empty_map[born_y + i][born_x + j]);
	  j = j + 1;
	  k = k + 1;
	}
      i = i + 1;
    }
  i = 1;
  while (i < 10)
    {
      if (is_pos(empty_map[y][x], i) == 1 && check_pos(temp, i + 48) == 1)
	return (i);
      i = i + 1;
    }
  return (0);
}
