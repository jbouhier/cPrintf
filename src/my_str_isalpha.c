/*
** my_str_isalpha.c for my_str_isalpha in /Users/synxs/etna/piscine/c/j05/libmy
** 
** Made by BOUHIER Jean-Baptiste
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Tue Apr  1 15:27:59 2014 BOUHIER Jean-Baptiste
** Last update Tue Apr  1 15:28:02 2014 BOUHIER Jean-Baptiste
*/

int		my_str_isalpha(char *str)
{
	int		i;
	char	c;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
			res += 1;
		i++;
	}
	return (res != 0 ? 0 : 1);
}
