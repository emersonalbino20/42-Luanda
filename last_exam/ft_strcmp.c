#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1 - s2);
}

int	main(void)
{
	printf("%i", ft_strcmp("casa", "casai"));
	return (0);
}
