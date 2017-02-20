/*
** base.c for base.c in /home/hofman_p//W/Projets/Minitalk
**
** Made by pierre hofman
** Login   <hofman_p@epitech.net>
**
** Started on  Tue Mar 19 18:14:43 2013 pierre hofman
** Last update Sat Mar 23 02:38:04 2013 pierre hofman
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  int	i;

  i = -1;
  while (str[++i])
    my_putchar(str[i]);
}
