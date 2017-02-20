/*
** client.c for client.c in /home/hofman_p//W/Projets/Minitalk/Client
**
** Made by pierre hofman
** Login   <hofman_p@epitech.net>
**
** Started on  Mon Mar 18 01:08:25 2013 pierre hofman
** Last update Sat Mar 23 17:03:10 2013 pierre hofman
*/

#include "../my.h"

void	my_servmsg(int servpid, char servcharmsg)
{
  char	cnt;

  cnt = -1;
  while (++cnt < 8)
    {
      usleep(2500);
      if (((servcharmsg >> cnt) & 0b1) == 1)
	{
	  if (kill(servpid, SIGUSR1) == -1)
	    {
	      my_putstr("Error killing process.\n");
	      my_exit();
	    }
	}
      else
	if (kill(servpid, SIGUSR2) == -1)
	  {
	    my_putstr("Error killing process.\n");
	    my_exit();
	  }
    }
}

void	my_calcsig(char **argv)
{
  char	*servmsg;
  int	cnt;
  int	servpid;

  servmsg = argv[2];
  servpid = my_getnbr(argv[1]);
  cnt = 0;
  while (servmsg[cnt] != '\0')
    my_servmsg(servpid, servmsg[cnt++]);
  my_servmsg(servpid, servmsg[cnt]);
}

int	main(int argc, char **argv)
{
  if (argc != 3)
    {
      my_putstr("Error : Need 2 arguments.\n");
      my_exit();
    }
  else
    my_calcsig(argv);
  return (0);
}
