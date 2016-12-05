/*
** free_file.c for rush in /home/baron_l//local/rendu/projets/rush/rush2/rendu/etape_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar  3 20:03:02 2013 louis-philippe baron
** Last update Sun Mar  3 20:57:34 2013 louis-philippe baron
*/

#include	"hprojet.h"

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
