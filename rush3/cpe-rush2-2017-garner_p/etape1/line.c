/*
** line.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Apr 21 17:19:45 2013 louis-philippe baron
** Last update Sun Apr 21 18:00:32 2013 louis-philippe baron
*/

#include	"hsudo.h"

int	check_line(int x, int y, int **empty_map)
{
  char	base[9];
  int	i;

  (void)x;
  i = 0;
  while (i < 9)
    {
      base[i] = i + 1;
      i = i + 1;
    }
  i = 0;
  while (i < 9)
    {
      if (empty_map[y][i] < 10 && empty_map[y][i] > 0)
	base[empty_map[y][i] - 1] = 0;
      i = i + 1;
    }
  return (ret_pos(base));
}

int	line(int x, int y, int **empty_map)
{
  char	temp[9][10] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
  int	i;

  i = 0;
  while (i < 9)
    {
      sprintf(temp[i], "%d", empty_map[y][i]);
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
