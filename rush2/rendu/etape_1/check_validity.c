/*
** check_validity.c for rush in /home/baron_l//local/rendu/projets/rush/rush2/rendu/etape_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar  3 20:17:49 2013 louis-philippe baron
** Last update Sun Mar  3 21:40:41 2013 louis-philippe baron
*/

#include	"hprojet.h"

int		check_validity(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9') && str[i] != 'x')
	return (ERROR);
      i++;
    }
  return (0);
}

static int	check_entry_exit(char **file, char to_find)
{
  int		k;
  int		i;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (file[k][i])
	{
	  if (file[k][i] == to_find)
	    return (0);
	  i++;
	}
      k++;
    }
  return (ERROR);
}

static int	check_walls(t_list *list, char **file)
{
  int		k;
  int		i;

  k = 0;
  while (file[k])
    {
      if (k == 0 || k == list->y - 1)
	{
	  i = 0;
	  while (file[k][i])
	    {
	      if (file[k][i] != '*' && file[k][i] != '1' && file[k][i] != '2')
		return (ERROR);
	      i++;
	    }
	}
      if ((file[k][0] != '*' && file[k][0] != '1' && file[k][0] != '2')
	  || (file[k][list->x - 1] != '*' && file[k][list->x - 1] != '1'
	      && file[k][list->x - 1] != '2'))
	return (ERROR);
      k++;
    }
  return (0);
}

static int	check_content(t_list *list, char **file)
{
  int		k;
  int		i;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (file[k][i])
	{
	  if (file[k][i] != ' ' && file[k][i] != '*'
	      && file[k][i] != '1' && file[k][i] != '2')
	    return (ERROR);
	  i++;
	}
      if (i != list->x)
	return (ERROR);
      k++;
    }
  if (k != list->y)
    return (ERROR);
  return (0);
}

int		check_file(t_list *list, char **file)
{
  if (check_content(list, file) == ERROR)
    return (ERROR);
  if (check_entry_exit(file, '1') == ERROR)
    return (ERROR);
  if (check_entry_exit(file, '2') == ERROR)
    return (ERROR);
  if (check_walls(list, file) == ERROR)
    return (ERROR);
  return (0);
}
