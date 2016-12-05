/*
** check_validity.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p/etape2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Apr 21 01:13:14 2013 louis-philippe baron
** Last update Sun Apr 21 02:10:55 2013 louis-philippe baron
*/

#include	"hsudo.h"

static int	check(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    k++;
  if (k != 9)
    {
      printf("Invalid grid length\n");
      return (ERROR);
    }
  k = 0;
  while (file[k])
    {
      if (strlen(file[k]) != 20)
	{
	  printf("Invalid length line %d\n", k + 1);
	  return (ERROR);
	}
      k++;
    }
  return (0);
}

int		check_validity(char **file)
{
  if (check(file) == ERROR
      || check_content(file) == ERROR)
    return (ERROR);
  return (0);
}
