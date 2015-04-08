/*
** my_sort_int_tab.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:54:21 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:54:22 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	tmp;

  for (i = 0; i < size; i++)
    {
      if (i + 1 < size && tab[i] > tab[i + 1])
	{
	  tmp = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = tmp;
	  i = -1;
	}
    }
}
