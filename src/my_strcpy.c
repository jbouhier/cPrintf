/*
** my_strcpy.c for my_strcpy in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sun Mar 30 23:42:01 2014 BOUHIER Jean-Baptiste
** Last update Sun Mar 30 23:42:12 2014 BOUHIER Jean-Baptiste
*/

char	*my_strcpy(char *dest, char *src)
{
	int		i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
