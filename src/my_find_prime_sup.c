#include "my.h"

int		my_find_prime_sup(int nb)
{
	int		i;

	if ((my_is_prime(nb)) == 0)
	{
		for (i = nb; i <= 2147483647;i++)
		{
			if ((my_is_prime(i)) == 1)
				return (i);
		}
	}
	return (nb);
}
