/*
** my_strlowcase.c for my_strlowcase in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sun Mar 30 23:50:25 2014 BOUHIER Jean-Baptiste
** Last update Sun Mar 30 23:50:28 2014 BOUHIER Jean-Baptiste
*/

char	*my_strlowcase(char *str)
{
	int		i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	str[i] = '\0';
	return (str);
}
