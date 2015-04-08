/*
** my_getnbr.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:53:13 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:53:15 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

int	my_getnbr(char *str)
{
  int	nb;
  int	i;

  nb = 0;
  for (i = 0; str[i]; i++)
    {
      if (str[i] == '-')
	return (-my_getnbr(str + 1));
      else
	{
	  if ((str[i] < '0') || (str[i] > '9'))
	    return (nb);
	  nb += str[i] - '0';
	  if (str[i + 1] && str[i + 1] >= '0' && str[i + 1] <= '9')
	    nb *= 10;
	}
    }
  return (nb);
}
