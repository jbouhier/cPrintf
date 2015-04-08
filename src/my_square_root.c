int		my_square_root(int nb)
{
	int		i;

	if (nb == 1)
		return (1);
	else
	{
		for (i = 1; i <= (nb / 2); i++)
		{
			if ((i * i) == nb)
				return (i);
		}
		return (0);
	}
}
