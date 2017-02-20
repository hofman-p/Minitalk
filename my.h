/*
** my.h for my.h in /home/hofman_p//W/Projets/Minitalk
**
** Made by pierre hofman
** Login   <hofman_p@epitech.net>
**
** Started on  Tue Mar 19 18:08:04 2013 pierre hofman
** Last update Sat Mar 23 02:37:55 2013 pierre hofman
*/

#ifndef MY_H_
# define MY_H_

#define EXIT_FAILURE	1
#define	EXIT_SUCCESS	2

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_exit();
void	my_put_nbr(int nb);
int	my_getnbr(char *str);
int	my_strlen(char *str);

#endif /* !MY_H_ */
