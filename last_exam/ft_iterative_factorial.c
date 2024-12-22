#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	result = nb;
	nb--;
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
}
