/*
** pushswap.h for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap/include
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Nov 21 10:13:58 2016 Simon LEJEUNE
** Last update Wed Nov 23 18:46:54 2016 Simon LEJEUNE
*/

#ifndef	PUSHSWAP_H_
#define PUSHSWAP_H_

struct s_list
{
  int	nb;
  struct s_list *next;
};

typedef struct s_list t_list;

void	my_putchar (char);
void	my_putstr(char *);
void	my_put_nbr(int);
int	my_isnum(char *);
int	my_isnum_error(char *);
int	list_size(t_list *list);
int	begin_list(t_list **list, int nb);
int	end_list(t_list **list, int nb);
int	show_list(t_list *list);
int	free_list(t_list **list);
int	check_sort(t_list **list);

#endif	//PUSHWAP_H_
