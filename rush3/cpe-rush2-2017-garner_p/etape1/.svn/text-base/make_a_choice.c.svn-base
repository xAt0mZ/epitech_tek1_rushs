/*
** make_a_choice.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Apr 21 17:23:07 2013 louis-philippe baron
** Last update Sun Apr 21 17:23:25 2013 louis-philippe baron
*/

#include	"hsudo.h"

int	*my_strdup(int *to_dup)
{
  int	*new;
  int	i;

  if ((new = malloc(sizeof(int) * 10)) == NULL)
    exit (1);
  i = 0;
  while (i < 9)
    {
      new[i] = to_dup[i];
      i = i + 1;
    }
  return (new);
}

int	**duplicate(int **to_dup)
{
  int	**new;
  int	i;

  if ((new = malloc(sizeof(int *) * 10)) == NULL)
    exit (1);
  i = 0;
  while (i < 9)
    {
      new[i] = my_strdup(to_dup[i]);
      i = i + 1;
    }
  new[i] = NULL;
  return (new);
}

int	**try_this_one(int x, int y, int **empty_map)
{
  int	n;
  int	**new;
  int	**old;

  n = empty_map[y][x];
  while (n > 0)
    {
      new = duplicate(empty_map);
      old = new;
      new[y][x] = n % 10;
      n = n / 10;
      if ((new = fill_map(new)) != NULL)
	{
	  free_map(empty_map);
	  empty_map = new;
	  return (empty_map);
	}
      else
	free_map(old);
    }
  return (NULL);
}

int	**make_a_choice(int **empty_map)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (empty_map[i][j] > 9)
	    {
	      empty_map = try_this_one(j, i, empty_map);
	      return (empty_map);
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  return (NULL);
}
