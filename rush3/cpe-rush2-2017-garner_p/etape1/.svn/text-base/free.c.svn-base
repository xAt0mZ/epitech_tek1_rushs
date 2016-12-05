/*
** free.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:48:46 2013 louis-philippe baron
** Last update Sun Apr 21 17:21:44 2013 louis-philippe baron
*/

#include	"hsudo.h"

void	free_map(int **to_free)
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

int		free_int(int **file)
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
