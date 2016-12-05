/*
** main.c for rush in /home/baron_l//local/rendu/projets/rush/rush2/rendu/etape_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar  3 19:06:13 2013 louis-philippe baron
** Last update Sun Mar  3 22:09:01 2013 louis-philippe baron
*/

#include	"hprojet.h"

static char	**get_file(t_list *list, int fd)
{
  char		**file;
  char		*size;
  int		k;

  if ((size = get_next_line(fd)) == NULL)
    return (NULL);
  if (check_validity(size) == ERROR)
    {
      my_putstr("Invalid size line (first of file)\n");
      return (NULL);
    }
  list->y = my_getnbr(size, 1);
  list->x = my_getnbr(size, 2);
  if ((file = malloc((list->y + 1) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (k < list->y)
    {
      if ((file[k] = get_next_line(fd)) == NULL)
	return (NULL);
      k++;
    }
  file[k] = NULL;
  free(size);
  return (file);
}

static int	grimly_2(t_list *list, int fd)
{
  char		**file;

  if ((file = get_file(list, fd)) == NULL)
    {
      my_putstr("Error while getting file\n");
      return (ERROR);
    }
  if (check_file(list, file) == ERROR)
    {
      my_putstr("MAP ERROR\n");
      return (ERROR);
    }
  show_file(file);
  find_path(file);
  show_file(file);
  free_file(file);
  return (0);
}

static int	grimly(char *str)
{
  t_list	list;
  int		fd;

  if (check_file_name(str) == ERROR)
    return (ERROR);
  if ((fd = open(str, O_RDONLY)) == -1)
    {
      my_putstr("Can not open file\n");
      return (ERROR);
    }
  if (grimly_2(&list, fd) == ERROR)
    return (ERROR);
  close(fd);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 3)
    {
      if (my_strcmp(av[1], "-f") == ERROR)
	{
	  my_putstr("Bad arguments\nUsage : ./grimly -f file.map\n");
	  return (ERROR);
	}
      if (grimly(av[2]) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./grimly -f file.map\n");
  return (0);
}
