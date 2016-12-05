/*
** algo.c for rush2 in /home/garner_p/Workplace/C_Prog_Elem/rush
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Fri Apr 19 21:53:21 2013 Garnero Philip
** Last update Sun Apr 21 17:41:17 2013 louis-philippe baron
*/

#include	"hsudo.h"

void	my_putint(int *str)
{
  int	i;

  i = 0;
  while (i < 8)
    {
      printf("%d - ", str[i]);
      i = i + 1;
    }
  printf("%d\n", str[i]);
}

static int	cross_possibility(int **empty_map)
{
  int		i;
  int		j;
  int		res;

  res = 0;
  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (empty_map[i][j] > 9)
	    {
	      if ((res = line(j, i, empty_map)))
		empty_map[i][j] = res;
	      else if ((res = col(j, i, empty_map)))
		empty_map[i][j] = res;
	      else if ((res = square(j, i, empty_map)))
	      	empty_map[i][j] = res;
	      if (res)
		{
		  loop(empty_map);
		  return (0);
		}
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int	loop(int **empty_map)
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
	    {
	      empty_map[i][j] = cross_over(j, i, empty_map);
	      if (empty_map[i][j] > 0 && empty_map[i][j] < 10)
		{
		  loop(empty_map);
		  return (0);
		}
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  cross_possibility(empty_map);
  return (0);
}

int	**fill_map(int **empty_map)
{
  loop(empty_map);
  if (check_end(empty_map) == 1)
    {
      empty_map = make_a_choice(empty_map);
      return (empty_map);
    }
  if (check_ending(empty_map) == 1)
    return (NULL);
  return (empty_map);
}
