/*
** show_file.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:58:15 2013 louis-philippe baron
** Last update Sat Apr 20 00:59:04 2013 louis-philippe baron
*/

#include	"hsudo.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		show_end(char **file)
{
  int		k;
  int		i;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (i < 21)
	{
	  my_putchar(file[k][i] + '0');
	  i++;
	}
      my_putchar('\n');
      k++;
    }
  return (0);
}

int		show_file(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      printf("%s\n", file[k]);
      k++;
    }
  return (0);
}
