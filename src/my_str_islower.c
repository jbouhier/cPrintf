/*
** my_str_islower.c for my_str_islower in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Tue Apr  1 18:45:22 2014 BOUHIER Jean-Baptiste
** Last update Tue Apr  1 18:45:24 2014 BOUHIER Jean-Baptiste
*/

int		my_str_islower(char *str)
{
	int		i;
	char	c;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z'))
			res += 1;
		i++;
	}
	return (res != 0 ? 0 : 1);
}
