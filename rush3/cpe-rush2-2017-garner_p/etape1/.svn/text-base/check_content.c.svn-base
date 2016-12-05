/*
** check_content.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Apr 20 00:10:50 2013 louis-philippe baron
** Last update Sat Apr 20 19:45:08 2013 louis-philippe baron
*/

#include	"hsudo.h"

static int	check_first(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if ((i && i != 19 && str[i] != '-')
	  || ((i == 0 || i == 19) && str[i] != '|'))
	return (ERROR);
      i++;
    }
  return (0);
}

static int	check_others(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (((i == 0 || i == 19) && str[i] != '|')
	  || (i && i != 19 && i % 2 == 1 && str[i] != ' ')
	  || (i && i!= 19 && i % 2 == 0 &&
	      !(str[i] >= '0' && str[i] <= '9') && str[i] != ' '))
	return (ERROR);
      i++;
    }
  return (0);
}

int		check_content(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      if (((k == 0 || k == 10) && check_first(file[k]) == ERROR)
	  || (k && k != 10 && check_others(file[k]) == ERROR))
	{
	  printf("Invalid content line %d\n", k + 1);
	  return (ERROR);
	}
      k++;
    }
  return (0);
}
