/*
** basics.c for rush1 in /home/baron_l//local/rendu/piscine/rush/rush1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Dec  1 10:51:58 2012 louis-philippe baron
** Last update Sat Dec  1 12:57:08 2012 louis-philippe baron
*/

#include	"hrush.h"
#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\n' && str[i])
    my_putchar(str[i++]);
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
  rd->read1 = GETLINE1;
  rd->read2 = GETLINE2;
  while (((rd->read1 = GETLINE1) != -1) && ((rd->read2 = GETLINE2) != -1))
    print_beats(rd->line1, rd->line2);
  while ((rd->read1 = GETLINE1) != -1)
    {
      my_putstr(rd->line1);
      my_putchar('\n');
    }
  while ((rd->read2 = GETLINE2) != -1)
    {
      my_putstr(rd->line2);
      my_putchar('\n');
    }
  return (0);
}
