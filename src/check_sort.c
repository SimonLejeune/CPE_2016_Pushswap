/*
** check_sort.c for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Nov 23 18:43:13 2016 Simon LEJEUNE
** Last update Wed Nov 23 18:46:06 2016 Simon LEJEUNE
*/

#include "../include/pushswap.h"
#include <stdlib.h>

int	check_sort(t_list **list)
{
  t_list	*tmp;
  t_list	*tmp2;

  tmp = *list;
  tmp2 = *list;
  while (tmp2 != NULL)
    {
      while (tmp != NULL)
	{
	  if (tmp2->nb <= tmp->nb)
	    tmp = tmp->next;
	  else
	    return (1);
	}
      tmp2 = tmp2->next;
      tmp = tmp2;
    }
  return (0);
}
