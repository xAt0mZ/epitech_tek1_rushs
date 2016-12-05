/*
** main.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:26:34 2013 louis-philippe baron
** Last update Sun Apr 21 16:57:02 2013 louis-philippe baron
*/

#include	"hsudo.h"

static int	sudo()
{
  char		**file;
  int		**res;

  if ((file = get_file()) == NULL)
    {
      printf("Error while getting file.\n");
      return (ERROR);
    }
  if (check_validity(file) == ERROR)
    return (ERROR);
  if ((res = clean_file(file)) == NULL)
    return (ERROR);
  if ((res = fill_map(res)) == NULL)
    {
      printf("The map is invalid and can't be resolved !\n");
      return (ERROR);
    }
  show_end(res);
  free_int(res);
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
