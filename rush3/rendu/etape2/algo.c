/*
** algo.c for rush2 in /home/garner_p/Workplace/C_Prog_Elem/rush
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Fri Apr 19 21:53:21 2013 Garnero Philip
** Last update Sat Apr 20 20:39:03 2013 Garnero Philip
*/

#include	"hsudo.h"

static int	ret_pos(char *base)
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

int	check_line(int x, int y, char **empty_map)
{
  char	base[10];
  int	i;

  i = 0;
  while (i < 9)
    {
      base[i] = i + 1;
      i = i + 1;
    }
  i = 0;
  while (i < 9)
    {
      if (empty_map[y][i])
	base[empty_map[y][i] - 1] = 0;
      i = i + 1;
    }
  return (ret_pos(base));
}

int	check_col(int x, int y, char **empty_map)
{
  char	base[10];
  int	i;

  i = 0;
  while (i < 9)
    {
      base[i] = i + 1;
      i = i + 1;
    }
  i = 0;
  while (i < 9)
    {
      if (empty_map[i][x])
	base[empty_map[i][x] - 1] = 0;
      i = i + 1;
    }
  return (ret_pos(base));
}

int	check_square(int x, int y, char **empty_map)
{
  char	base[10];
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
	  if (empty_map[y + i][x + j])
	    base[empty_map[y + i][x + j] - 1] = 0;
	  j = j + 1;
	}
      i = i + 1;
    }
  return (ret_pos(base));
}

int	check_simple_poss(int x, int y, char **empty_map)
{
  int	n;

  if ((n = check_line(x, y, empty_map)) && n > 0 && n < 10)
    empty_map[y][x] = n;
  else if ((n = check_col(x, y, empty_map)) && n > 0 && n < 10)
    empty_map[y][x] = n;
  else if ((n = check_square(x - (x % 3), y - (y % 3), empty_map)) && n > 0 && n < 10)
    empty_map[y][x] = n;
  else
    return (1);
  show_end(empty_map);
  return (0);
}

int	check_end(char **empty_map)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (empty_map[i][j] == 0)
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

int	cross_over(int x, int y, char **empty_map)
{
  char	n1[10];
  char	n2[10];
  char	n3[10];
  int	i;
  int	res;

  sprintf(n1, "%d", check_line(x, y, empty_map));
  sprintf(n2, "%d", check_col(x, y, empty_map));
  sprintf(n3, "%d", check_square(x, y, empty_map));
  res = 0;
  i = 1;
  while (i < 10)
    {
      if (finder(n1, i + 48) == 1 && finder(n2, i + 48) == 1 && finder(n3, i + 48) == 1)
	res = i + (res * 10);
      i = i + 1;
    }
  return (res);
}

void	free_map(char **to_free)
{
  int	i;

  i = 0;
  while (i < 9)
    {
      free(to_free[i]);
      i = i + 1;
    }
  free(to_free);
}

char	*my_strdup(char *to_dup)
{
  char	*new;
  int	i;

  if ((new = malloc(sizeof(char) * 10)) == NULL)
    exit (1);
  i = 0;
  while (i < 9)
    {
      new[i] = to_dup[i];
      i = i + 1;
    }
  return (new);
}

char	**duplicate(char **to_dup)
{
  char	**new;
  int	i;

  if ((new = malloc(sizeof(char *) * 10)) == NULL)
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

char	**make_a_choice(char **empty_map, int depth)
{
  char	**new;
  int	i;
  int	j;
  int	n;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (empty_map[i][j] == 0)
	    {
	      n = cross_over(j, i, empty_map);
	      while (n > 0)
		{
		  new = duplicate(empty_map);
		  new[i][j] = n % 10;
		  n = n / 10;
		  if ((new = fill_map(new, depth)) != NULL)
		    return (new);
		}
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  return (NULL);
}

int	check_ending(char **empty_map)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (check_line(j, i, empty_map) != 0 || check_col(j, i, empty_map) != 0 || check_square(j, i, empty_map) != 0)
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

void	loop(char **empty_map)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (empty_map[i][j] == 0)
	    if (check_simple_poss(j, i, empty_map) == 0)
	      loop(empty_map);
	  j = j + 1;
	}
      i = i + 1;
    }
}

char	**fill_map(char **empty_map, int depth)
{
  loop(empty_map);
  if (check_end(empty_map) == 1)
    empty_map = make_a_choice(empty_map, depth + 1);
  else if (depth > 0)
    {
      if (check_validity(empty_map) == 1)
	{
	  free_map(empty_map);
	  return (NULL);
	}
      else
	return (empty_map);
    }
  return (empty_map);
}
