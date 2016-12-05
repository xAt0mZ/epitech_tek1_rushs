/*
** main.c for rush1 in /home/baron_l//local/rendu/piscine/rush/rush1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 30 22:42:41 2012 louis-philippe baron
** Last update Sat Dec  1 12:41:06 2012 louis-philippe baron
*/

#include	"hrush.h"

int		main(int ac, char **av)
{
  t_read	*rd;

  if ((rd = malloc(sizeof(*rd))) == NULL)
    {
      printf("Failed to malloc'\n");
      return (EXIT_FAILURE);
    }
  rd->line1 = NULL;
  rd->line2 = NULL;
  rd->len1 = 0;
  rd->len2 = 0;
  if(ac == 3)
    {
      rd->fp1 = fopen(av[1], "r");
      rd->fp2 = fopen(av[2], "r");
      if (rd->fp1 == NULL || rd->fp2 == NULL)
	exit(EXIT_FAILURE);
      get_values(rd);
      free(rd->line1);
      free(rd->line2);
      fclose(rd->fp1);
      fclose(rd->fp2);
      free(rd);
    }
  exit(EXIT_SUCCESS);
}
