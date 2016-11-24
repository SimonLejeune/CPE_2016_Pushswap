/*
** main.c for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Nov 21 12:27:14 2016 Simon LEJEUNE
** Last update Thu Nov 24 14:05:12 2016 Simon LEJEUNE
*/

#include "../include/pushswap.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	sort;
  t_list	*list1;
  t_list	*list2;

  i = 0;
  sort = 0;
  list1 = NULL;
  list2 = NULL;
  if (ac == 2)
    my_putchar('\n');
  if (ac > 2)
    {
      while (i < ac)
	{
	  (my_isnum_error(av[i]) == 0) ?
	   (end_list(&list1, my_isnum(av[i])), sort = 1) : (0);
	  i++;
	}
      ((check_sort(&list1) == 0) ? (my_putchar('\n')) :
       ((sort == 1) ? pushswap(&list1, &list2) : (0)));
      free_list(&list1);
      free_list(&list2);
    }
}
