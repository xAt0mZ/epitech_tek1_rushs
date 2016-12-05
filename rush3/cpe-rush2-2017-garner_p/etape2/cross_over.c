/*
** cross_over.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Apr 21 17:23:54 2013 louis-philippe baron
** Last update Sun Apr 21 17:24:21 2013 louis-philippe baron
*/

#include	"hsudo.h"

int	check_end(int **empty_map)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (empty_map[i][j] < 1 || empty_map[i][j] > 9)
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int	finder(char *str, char to_find)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == to_find)
	return (1);
      i = i + 1;
    }
  return (0);
}

int	cross_over(int x, int y, int **empty_map)
{
  char	n1[10];
  char	n2[10];
  char	n3[10];
  int	i;
  int	res;

  sprintf(n1, "%d", check_line(x, y, empty_map));
  sprintf(n2, "%d", check_col(x, y, empty_map));
  sprintf(n3, "%d", check_square(x - (x % 3), y - (y % 3), empty_map));
  res = 0;
  if (strlen(n1) == 1)
    res = atoi(n1);
  else if (strlen(n2) == 1)
    res = atoi(n2);
  else if (strlen(n3) == 1)
    res = atoi(n3);
  if (res != 0)
    return (res);
  i = 0;
  while (++i < 10)
    {
      if (finder(n1, i + 48) == 1 && finder(n2, i + 48) == 1 && finder(n3, i + 48) == 1)
	res = i + (res * 10);
    }
  return (res);
}
