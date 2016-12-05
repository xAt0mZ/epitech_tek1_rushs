/*
** check_validity.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 23:51:09 2013 louis-philippe baron
** Last update Sat Apr 20 06:35:16 2013 Garnero Philip
*/

#include	"hsudo.h"

static int	check_length(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    k++;
  if (k != 11)
    {
      printf("Invalid total length\n");
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
  if (check_length(file) == ERROR
      || check_content(file) == ERROR)
    return (ERROR);
  return (0);
}
