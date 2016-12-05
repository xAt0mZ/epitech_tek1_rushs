/*
** part1.c for rush1 in /home/baron_l//local/rendu/piscine/rush/rush1/rush1-2017-moulin_f
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Dec  1 14:19:06 2012 louis-philippe baron
** Last update Sat Dec  1 14:32:13 2012 louis-philippe baron
*/

#include	"hrush.h"

int		end_files(int i, int nb1, t_read *rd)
{
  if (i != nb1)
    while ((rd->read1 = GETLINE1) != -1)
      {
	my_putstr(rd->line1);
	my_putchar('\n');
      }
  else
    while ((rd->read2 = GETLINE2) != -1)
      {
	my_putstr(rd->line2);
	my_putchar('\n');
      }
  return (0);
}

int		print_beats(char *line1, char *line2)
{
  my_putstr(line1);
  my_putchar('_');
  my_putstr(line2);
  my_putchar('\n');
  return (0);
}

int		get_values(t_read *rd)
{
  int		nb1;
  int		nb2;
  int		i;

  i = 0;
  rd->read1 = GETLINE1;
  nb1 = getnbr(rd->line1);
  rd->read2 = GETLINE2;
  nb2 = getnbr(rd->line2);
  while (i < nb1 && i < nb2 && ((rd->read1 = GETLINE1) != -1)
	 && ((rd->read2 = GETLINE2) != -1))
    {
      print_beats(rd->line1, rd->line2);
      i++;
    }
  end_files(i, nb1, rd);
  return (0);
}
