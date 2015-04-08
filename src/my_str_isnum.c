/*
** my_str_isnum.c for my_str_isnum in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Tue Apr  1 16:40:11 2014 BOUHIER Jean-Baptiste
** Last update Tue Apr  1 18:43:27 2014 BOUHIER Jean-Baptiste
*/

int		my_str_isnum(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			res += 1;
		i++;
	}
	return (res != 0 ? 0 : 1);
}
