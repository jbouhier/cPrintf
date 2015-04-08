/*
** my_str_isupper.c for my_str_isupper in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Tue Apr  1 18:45:22 2014 BOUHIER Jean-Baptiste
** Last update Tue Apr  1 19:01:49 2014 BOUHIER Jean-Baptiste
*/

int		my_str_isupper(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			res += 1;
		i++;
	}
	return (res != 0 ? 0 : 1);
}
