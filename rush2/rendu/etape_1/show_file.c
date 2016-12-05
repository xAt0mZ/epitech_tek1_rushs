/*
** show_file.c for rush in /home/baron_l//local/rendu/projets/rush/rush2/rendu/etape_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar  3 20:25:42 2013 louis-philippe baron
** Last update Sun Mar  3 20:30:24 2013 louis-philippe baron
*/

#include	"hprojet.h"

int		show_file(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      my_putstr(file[k]);
      my_putchar('\n');
      k++;
    }
  return (0);
}
