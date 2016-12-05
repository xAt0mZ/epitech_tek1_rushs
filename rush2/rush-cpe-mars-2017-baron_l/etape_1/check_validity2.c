/*
** check_validity2.c for rush in /home/baron_l//local/rendu/projets/rush/rush2/rush-cpe-mars-2017-baron_l/etape_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar  3 22:02:33 2013 louis-philippe baron
** Last update Sun Mar  3 22:05:38 2013 louis-philippe baron
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

int		check_file_name(char *str)
{
  int		i;

  i = 0;
  while (str[i] && str[i] != '.')
    i++;
  if (str[i] == '\0' || my_strcmp(&str[i], ".map") == ERROR)
    {
      my_putstr("Bad file name\n");
      return (ERROR);
    }
  return (0);
}
