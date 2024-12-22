#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	nu;

	nu = nbr;
	if (nu < 0)
	{
		ft_putchar('-');
		nu = -nu;
	}
	if (nu / 10 != 0)
		ft_putnbr(nu/10);
	ft_putchar(nu % 10 + '0');
}

int	main(void)
{
	ft_putnbr(-20);
	return (0);
}
