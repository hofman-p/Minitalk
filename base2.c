/*
** base2.c for base2.c in /home/hofman_p//W/Projets/Minitalk
**
** Made by pierre hofman
** Login   <hofman_p@epitech.net>
**
** Started on  Tue Mar 19 18:46:12 2013 pierre hofman
** Last update Fri Mar 22 13:46:03 2013 pierre hofman
*/

#include "my.h"

void	my_put_nbr(int nb)
{
  int	div;
  int	modulo;

  div = 0;
  modulo = 0;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  div = nb / 10;
  modulo = nb % 10;
  if (div != 0)
    {
      my_put_nbr(div);
    }
  my_putchar(modulo + 48);
}

int	my_getnbr(char *str)
{
  int	result;

  result = 0;
  while ((*str >= '0') && (*str <= '9'))
    result = (result * 10) + *str++ - '0';
  return (result);
}

void	my_exit()
{
  my_putstr("Exiting ...\n");
  exit(EXIT_FAILURE);
}
