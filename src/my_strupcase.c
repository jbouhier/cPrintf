/*
** my_strupcase.c for my_strupcase in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sun Mar 30 23:49:03 2014 BOUHIER Jean-Baptiste
** Last update Mon Mar 31 00:07:33 2014 BOUHIER Jean-Baptiste
*/

char	*my_strupcase(char *str)
{
	int		i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	str[i] = '\0';
	return (str);
}
