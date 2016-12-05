/*
** show_file.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 22:58:15 2013 louis-philippe baron
** Last update Sat Apr 20 21:29:37 2013 louis-philippe baron
*/

#include	"hsudo.h"

int		show_end(int **file)
{
  int		k;
  int		i;

  k = 0;
  printf("|------------------|\n");
  while (file[k])
    {
      i = 0;
      printf("|");
      while (i < 9)
	{
	  if (file[k][i])
	    printf(" %d", file[k][i]);
	  else
	    printf("  ");
	  i++;
	}
      printf("|\n");
      k++;
    }
  printf("|------------------|\n");
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
