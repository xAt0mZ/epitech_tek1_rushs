/*
** free.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:48:46 2013 louis-philippe baron
** Last update Fri Apr 19 22:50:03 2013 louis-philippe baron
*/

#include	"hsudo.h"

int		free_file(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      free(file[k]);
      k++;
    }
  free(file);
  return (0);
}
