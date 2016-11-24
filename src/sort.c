/*
** sort.c for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Nov 23 16:42:25 2016 Simon LEJEUNE
** Last update Thu Nov 24 14:19:50 2016 Simon LEJEUNE
*/

#include "../include/pushswap.h"
#include <stdlib.h>

void	push(t_list **list1, t_list **list2)
{
  int	nb;
  t_list	*temp_free;

  nb = (*list1)->nb;
  begin_list(list2, nb);
  temp_free = *list1;
  *list1 = (*list1)->next;
  free(temp_free);
}

void	rotate(t_list **list1)
{
  int	nb;
  t_list	*temp_free;

  nb = (*list1)->nb;
  end_list(list1, nb);
  temp_free = *list1;
  *list1 = (*list1)->next;
  free(temp_free);
}

int	calc_push(t_list *list)
{
  int	count;
  int	count2;
  int	nb;

  count = 0;
  count2 = 0;
  nb = list->nb;
  while (list != NULL)
    {
      if ((list->nb) < nb)
	{
	  nb = list->nb;
	  count = count2;
	}
      list = list->next;
      count2++;
    }
  return (count);
}

void	pushswap2(t_list **list1, t_list **list2)
{
  int	i;
  int	j;

  i = 0;
  if (list_size(*list1) != 1)
    {
      j = calc_push(*list1);
      while (i < j)
	{
	  rotate(list1);
	  my_putstr("ra ");
	  i++;
	}
      push(list1, list2);
      my_putstr("pb ");
      pushswap2(list1, list2);
    }
}

void	pushswap(t_list **list1, t_list **list2)
{
  int	i;

  pushswap2(list1, list2);
  i = list_size(*list2);
  while (i > 0)
    {
      push(list2, list1);
      i--;
      if (i > 0)
	my_putstr("pa ");
      else
	my_putstr("pa\n");
    }
}
