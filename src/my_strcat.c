/*
** my_strcat.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:54:57 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:55:00 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	ii;

  for (i = my_strlen(str1), ii = 0; str2[ii]; ii++, i++)
    str1[i] = str2[ii];
  str1[i] = '\0';
  return (str1);
}
