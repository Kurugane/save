int ft_iterative_power(int nb, int power);
{
	int res;

		res = 1;
		if (power < 0)
		return (0);
		while (power >= 1)
		{
			res *= nb;
			power--;
		}
		return (res);
}

