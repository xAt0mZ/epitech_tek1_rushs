/*
** hrush.h for rush1 in /home/baron_l//local/rendu/piscine/rush/rush1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Dec  1 10:41:37 2012 louis-philippe baron
** Last update Sat Dec  1 13:39:36 2012 louis-philippe baron
*/

#ifndef		HRUSH_H_
#define		HRUSH_H_

#define		_GNU_SOURCE
#include	<stdio.h>
#include	<stdlib.h>

#define		GETLINE1	(getline(&rd->line1, &rd->len1, rd->fp1))
#define		GETLINE2	(getline(&rd->line2, &rd->len2, rd->fp2))

typedef struct	s_read
{
  FILE		*fp1;
  FILE		*fp2;
  char		*line1;
  char		*line2;
  size_t	len1;
  size_t	len2;
  ssize_t	read1;
  ssize_t	read2;
} t_read;

int		get_values(t_read *);

#endif
