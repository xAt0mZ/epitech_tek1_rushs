/*
** clean_file.c for sudokibi in /home/baron_l//local/rendu/projets/rush/rush3/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr 19 23:36:20 2013 louis-philippe baron
** Last update Sat Apr 20 00:56:06 2013 louis-philippe baron
*/

#include	"hsudo.h"

static int	clean_lines(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      file[k][0] = file[k][2];
      file[k][1] = file[k][4];
      file[k][2] = file[k][6];
      file[k][3] = file[k][8];
      file[k][4] = file[k][10];
      file[k][5] = file[k][12];
      file[k][6] = file[k][14];
      file[k][7] = file[k][16];
      file[k][8] = file[k][18];
      k++;
    }
  return (0);
}

static int	change_lines(char **file)
{
  int		k;
  int		i;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (i < 9)
	{
	  if (file[k][i] == ' ')
	    file[k][i] = 0;
	  else
	    file[k][i] -= '0';
	  i++;
	}
      while (i < 21)
	{
	  file[k][i] = 0;
	  i++;
	}
      k++;
    }
  return (0);
}

int		clean_file(char **file)
{
  int		k;

  k = 1;
  free(file[0]);
  free(file[10]);
  while (k < 10)
    {
      file[k - 1] = file[k];
      k++;
    }
  file[9] = NULL;
  clean_lines(file);
  change_lines(file);
  return (0);
}
