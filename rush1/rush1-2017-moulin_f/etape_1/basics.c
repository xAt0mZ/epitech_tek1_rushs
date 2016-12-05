/*
** basics.c for rush1 in /home/baron_l//local/rendu/piscine/rush/rush1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Dec  1 10:51:58 2012 louis-philippe baron
** Last update Sat Dec  1 14:19:27 2012 louis-philippe baron
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

int		getnbr(char *str)
{
  int		nb;
  int		i;

  i = 0;
  nb = 0;
  while (str[i] && str[i] != '\n')
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb);
}
