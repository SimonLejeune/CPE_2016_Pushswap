/*
** list_tretment.c for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap/src
**
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
**
** Started on  Wed Nov 23 15:55:40 2016 Simon LEJEUNE
** Last update Wed Nov 23 18:35:35 2016 Simon LEJEUNE
*/

#include "../include/pushswap.h"
#include <stdlib.h>

int	list_size(t_list *list)
{
  int	count;

  count = 0;
  while (list != NULL)
  {
    count++;
    list = list->next;
  }
  return (count);
}

int	begin_list(t_list **list, int nb)
{
  t_list	*new_nb;

  new_nb = malloc(sizeof(t_list));
  if (new_nb == NULL)
    return (1);
  new_nb->nb = nb;
  new_nb->next = *list;
  *list = new_nb;
  return (0);
}

int	end_list(t_list **list, int nb)
{
  t_list	*new_nb;
  t_list	*temp;

  new_nb = malloc(sizeof(t_list));
  if (new_nb == NULL)
    return (1);
  new_nb->nb = nb;
  new_nb->next = NULL;
  if (*list == NULL)
    *list = new_nb;
  else
    {
      temp = *list;
      while (temp->next != NULL)
	temp = temp->next;
      temp->next = new_nb;
    }
  return (0);
}

int	show_list(t_list *list)
{
  while (list != NULL)
    {
      my_put_nbr(list->nb);
      my_putchar(' ');
      list = list->next;
    }
  return (0);
}

int	free_list(t_list **list)
{
  t_list	*temp_free;

  while (*list != NULL)
    {
      temp_free = *list;
      *list = (*list)->next;
      free(temp_free);
    }
  return (0);
}
