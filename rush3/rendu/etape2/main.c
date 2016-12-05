/*
** main.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:26:34 2013 louis-philippe baron
** Last update Sun Apr 21 01:55:24 2013 louis-philippe baron
*/

#include	"hsudo.h"

static int	sudokibi(char **file, char **tmp)
{
  int		k;
  int		i;
  int		**res;

  k = 1;
  while (file[k])
    {
      i = 0;
      while (i < 9)
	tmp[i++] = file[k++];
      if (check_validity(tmp) == ERROR)
	return (ERROR);
      if ((res = clean_file(tmp)) == NULL)
	return (ERROR);
      /* fill_map(file, 0); */
      show_end(res);
      free_int(res);
      k++;
      if (file[k])
	{
	  printf("####################\n");
	  k++;
	}
    }
  return (0);
}

static int	sudo()
{
  char		**file;
  char		**tmp;

  if ((file = get_file()) == NULL
      || (tmp = malloc(10 * sizeof(char *))) == NULL)
    {
      printf("Error while getting file.\n");
      return (ERROR);
    }
  tmp[9] = NULL;
  if (check_length(file) == ERROR)
    return (ERROR);
  if (sudokibi(file, tmp) == ERROR)
    return (ERROR);
  free_file(file);
  free(tmp);
  return (0);
}

int		main(int ac, char **av)
{
  (void)av;
  if (ac == 1)
    {
      if (sudo() == ERROR)
  	return (ERROR);
    }
  else
    printf("Usage : ./sudoki-bi < maps\n");
  return (0);
}
