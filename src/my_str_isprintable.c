/*
** my_str_isprintable.c for my_str_isprintable in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Tue Apr  1 19:03:40 2014 BOUHIER Jean-Baptiste
** Last update Tue Apr  1 19:03:42 2014 BOUHIER Jean-Baptiste
*/

int		my_str_isprintable(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			res += 1;
		i++;
	}
	return (res != 0 ? 0 : 1);
}
