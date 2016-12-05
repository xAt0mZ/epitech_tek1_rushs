/*
** ret_pos.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p/etape1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Apr 21 17:39:40 2013 louis-philippe baron
** Last update Sun Apr 21 17:40:10 2013 louis-philippe baron
*/

#include	"hsudo.h"

int		ret_pos(char *base)
{
  int		i;
  int		n;

  n = 0;
  i = 0;
  while (i < 9)
    {
      if (base[i] != 0)
	n = base[i] + (n * 10);
      i = i + 1;
    }
  return (n);
}

int	is_pos(int block, int num)
{
  while (block > 0)
    {
      if (block % 10 == num)
	return (1);
      block = block / 10;
    }
  return (0);
}
