/*
** my_put_nbr.c for my_put_nbr in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sun Mar 30 23:57:31 2014 BOUHIER Jean-Baptiste
** Last update Sun Mar 30 23:57:35 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"
#include <stdarg.h>

void	my_put_unsign(unsigned int nb)
{
	if (nb / 10 != 0)
		my_put_unsign(nb / 10);
	my_putchar((nb % 10) + '0');
}

int		my_put_nbr(va_list ap)
{
	int		nb;

	nb = va_arg(ap, int);
	if (nb < 0)
	{
		my_putchar('-');
		nb = -nb;
	}
	my_put_unsign(nb);
	return (0);
}
