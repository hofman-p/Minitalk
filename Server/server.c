/*
** server.c for server.c in /home/hofman_p//W/Projets/Minitalk/Server
**
** Made by pierre hofman
** Login   <hofman_p@epitech.net>
**
** Started on  Mon Mar 18 01:08:44 2013 pierre hofman
** Last update Sat Mar 23 02:40:35 2013 pierre hofman
*/

#include "../my.h"

void	my_calcsig(int bin_nbr)
{
  static int	cnt;
  static char	a;

  a = a + (bin_nbr << cnt++);
  if (cnt > 7)
    {
      if (a == '\0')
	my_putchar('\n');
      else
	my_putchar(a);
      cnt = 0;
      a = 0;
    }
}

void	my_signal(int sig_nbr)
{
  if (sig_nbr == SIGUSR1)
    my_calcsig(1);
  else if (sig_nbr == SIGUSR2)
    my_calcsig(0);
}

int	main(int argc, char **argv)
{
  if (argc != 1)
    {
      my_putstr("Error : No arguments needed.\n");
      my_exit();
    }
  else
    {
      my_putstr("PID du server = ");
      my_put_nbr(getpid());
      my_putstr("\n");
      if ((signal(SIGUSR1, my_signal) == SIG_ERR)
	  || (signal(SIGUSR2, my_signal) == SIG_ERR))
	{
	  my_putstr("Error : Bad signal.\n");
	  my_exit();
	}
      while (1)
	pause();
    }
  return (0);
}
