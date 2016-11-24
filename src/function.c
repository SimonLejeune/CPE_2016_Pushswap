/*
** function.c for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Nov 21 10:07:27 2016 Simon LEJEUNE
** Last update Thu Nov 24 14:14:54 2016 Simon LEJEUNE
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

int	my_put_nbr(int nb)
{
  int	d;

  d = 1;
  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb *= -1;
	}
      while ((nb / d >= 10))
	d *= 10;
      while (d > 0)
	{
	  my_putchar((nb / d) % 10 + '0');
	  d/= 10;
	}
    }
}

int	my_isnum(char *str)
{
  int	res;
  int	sign;
  int	i;
  
  res = 0;
  sign = 0;
  i = 0;
  ((str[i] == '-') ? (sign = 1, i++) : (0));
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  res *= 10;
	  res += str[i] - '0';
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
