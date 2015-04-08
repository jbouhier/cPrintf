/*
** my_strlcat.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:55:51 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:55:52 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

int	my_strlcat(char *str1, char *str2, int l)
{
  int	i;
  int	ii;
  int	n;
  int	k;

  ii = 0;
  for (i = 0; str1[i] && i < l; i++);
  n = l - (&str1[i] - &str1[0]);
  k = i;
  if (n == 0)
    return (&str1[i] - &str1[0] + my_strlen(str2));
  while (str2[ii])
    {
      if (n != 1)
	{
	  str1[i] = str2[ii];
	  n--;
	  i++;
	}
      ii++;
    }
  str1[i] = '\0';
  return ((&str1[k] - &str1[0]) + (&str2[ii] - &str2[0]));
}
