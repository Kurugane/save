#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_putchar(void)
{:
	if (c = 7)
	{ 
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(u);
	}
	else
	{
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(u);
		ft_putchar(',');
		ft_putchar(' ');
	}

void 	ft_print_comb(void)
{
	char c;
	char d;
	char u;
	c = '0';
	while (c <= '7')
	{
		d = (c + 1);
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_print_putchar();
				u++;
			}
			d++;
		}
		c++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
