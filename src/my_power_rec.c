int		my_power_rec(int nb, int power){
	if (power < 0)
		return (0);
	else if (power == 0)
	{
		return (1);
	}
	else
		return (nb * my_power_rec(nb, power - 1));
}
