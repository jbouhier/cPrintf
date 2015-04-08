/*
** my_strncpy.c for my_strncpy in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sun Mar 30 23:43:28 2014 BOUHIER Jean-Baptiste
** Last update Sun Mar 30 23:43:32 2014 BOUHIER Jean-Baptiste
*/

char	*my_strncpy(char *dest, char *src, int n)
{
	int		i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	if (n > i)
		dest[i] = '\0';
	return (dest);
}
