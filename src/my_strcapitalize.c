/*
** my_strcapitalize.c for  in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Mon Apr  7 14:54:35 2014 BOUHIER Jean-Baptiste
** Last update Mon Apr  7 14:54:36 2014 BOUHIER Jean-Baptiste
*/

#include "my.h"

int	is_this_start_word(char *str, int i)
{
  if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
    return (1);
  if (str[i - 1] && str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
    return (1);
  if (str[i - 1] && str[i - 1] == ' ' && str[i] >= 'A' && str[i] <= 'Z')
    return (1);
  return (0);
}

char	*my_strcapitalize(char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (is_this_start_word(str, i) == 1 && str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
      if (is_this_start_word(str, i) == 0 && str[i] >= 'A' && str[i] <= 'Z' && i != 0)
	str[i] += 32;
    }
  return (str);
}
