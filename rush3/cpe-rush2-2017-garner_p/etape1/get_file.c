/*
** get_file.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:50:25 2013 louis-philippe baron
** Last update Fri Apr 19 22:58:02 2013 louis-philippe baron
*/

#include	"hsudo.h"

static char	**my_realloc(char **file, char *tmp)
{
  char		**res;
  int		k;

  k = 0;
  while (file[k])
    k++;
  if ((res = malloc((k + 2) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (file[k])
    {
      res[k] = file[k];
      k++;
    }
  res[k] = tmp;
  res[k + 1] = NULL;
  free(file);
  return (res);
}

char		**get_file()
{
  char		**res;
  char		*tmp;

  if ((res = malloc(sizeof(char *))) == NULL)
    return (NULL);
  res[0] = NULL;
  while ((tmp = get_next_line(0)))
    {
      if ((res = my_realloc(res, tmp)) == NULL)
	return (NULL);
    }
  return (res);
}
