/*
** main.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:26:34 2013 louis-philippe baron
** Last update Sat Apr 20 00:58:39 2013 louis-philippe baron
*/

#include	"hsudo.h"

static int	sudo()
{
  char		**file;

  if ((file = get_file()) == NULL)
    {
      printf("Error while getting file.\n");
      return (ERROR);
    }
  show_file(file);
  if (check_validity(file) == ERROR)
    return (ERROR);
  clean_file(file);
  show_end(file);
  free_file(file);
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
