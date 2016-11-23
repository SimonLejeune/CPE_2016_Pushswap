/*
** function.c for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Nov 21 10:07:27 2016 Simon LEJEUNE
** Last update Wed Nov 23 16:41:02 2016 Simon LEJEUNE
*/

#include <unistd.h>
#include "../include/pushswap.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb <= 9)
    my_putchar (nb + '0');
  else
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  return (nb);
}

int	my_isnum(char *str)
{
  int	res;
  int	sign;
  int	i;

  res = 0;
  sign = 0;
  i = 0;
  ((*str == '-') ? (sign = 1, i++) : (0));
  while (*str != '\0')
    {
      if (*str >= '0' && *str <= '9')
	{
	  res *= 10;
	  res += *str - '0';
	}
      else
	return (res);
      i++;
    }
  if (sign == 0)
    return (res);
  else
    return (-res);
}

int	my_isnum_error(char *str)
{
  while (*str != '\0')
    {
      if ((*str < '0' || *str > '9') && *str != '-')
	return (1);
      str++;
    }
  return (0);
}
