/*
** my_putchar.c for my_putchar in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sat Mar 29 18:35:33 2014 BOUHIER Jean-Baptiste
** Last update Sun Mar 30 23:38:11 2014 BOUHIER Jean-Baptiste
*/

#include <unistd.h>

int		my_putchar(char c)
{
	write (1, &c, 1);
	return(1);
}
