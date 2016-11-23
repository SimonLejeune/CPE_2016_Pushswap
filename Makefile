##
## Makefile for pushswap in /home/slejeune/Elementary_Programming_in_C/CPE_2016_Pushswap
## 
## Made by Simon LEJEUNE
## Login   <slejeune@epitech.net>
## 
## Started on  Sat Nov 12 10:54:52 2016 Simon LEJEUNE
## Last update Wed Nov 23 18:46:29 2016 Simon LEJEUNE
##

NAME=	push_swap

SRC=	src/list_tretment.c \
	src/function.c \
	src/sort.c \
	src/check_sort.c \
	src/main.c

OBJ=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
