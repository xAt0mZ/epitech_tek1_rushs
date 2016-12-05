/*
** check_lenght.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/cpe-rush2-2017-garner_p/etape2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Apr 20 22:40:24 2013 louis-philippe baron
** Last update Sun Apr 21 01:23:25 2013 louis-philippe baron
*/

#include	"hsudo.h"

int		check_length(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    k++;
  if (k % 11)
    {
      printf("Invalid total length for file\n");
      return (ERROR);
    }
  return (0);
}
