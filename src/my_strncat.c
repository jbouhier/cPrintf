/*
** my_strncat.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:56:39 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:56:40 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	ii;

  for (i = my_strlen(str1), ii = 0; str2[ii] && ii < n; ii++, i++)
    str1[i] = str2[ii];
  str1[i] = '\0';
  return (str1);
}
