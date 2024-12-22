#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (str[i] != '\0' && str[i] == 32 || str[i] >= 7 && str[i] <= 13)
		i++;
	sign = 1;
	while (str[i] != '\0' && str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%i", ft_atoi("   ---+--+1234ab567"));
	return (0);
}
