/*
** my_revstr.c for my_revstr in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sun Mar 30 23:45:18 2014 BOUHIER Jean-Baptiste
** Last update Sun Mar 30 23:49:37 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

char	*my_revstr(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = (my_strlen(str) - 1);
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}
