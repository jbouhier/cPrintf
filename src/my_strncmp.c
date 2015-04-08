/*
** my_strncmp.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:57:05 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:57:15 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  for (; n > 0; s1++, s2++, n--)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      else if (!(*s1))
	return (0);
    }
  return (0);
}
