/*
** basics.c for rush in /home/baron_l//local/rendu/projets/rush/rush2/rendu/etape_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar  3 19:06:06 2013 louis-philippe baron
** Last update Sun Mar  3 19:57:53 2013 louis-philippe baron
*/

#include	"hprojet.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_strcmp(char *str, char *find)
{
  int		i;

  i = 0;
  while (str[i] && find[i])
    {
      if (str[i] != find[i])
	return (ERROR);
      i++;
    }
  if (find[i] == '\0')
    return (0);
  else
    return (ERROR);
}

int		my_getnbr(char *str, int pos)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  if (pos == 1)
    while (str[i] && str[i] != 'x')
      {
	nb = nb * 10 + (str[i] - '0');
	i++;
      }
  else
    {
      while (str[i] && str[i] != 'x')
	i++;
      i++;
      while (str[i])
      {
	nb = nb * 10 + (str[i] - '0');
	i++;
      }
    }
  return (nb);
}
