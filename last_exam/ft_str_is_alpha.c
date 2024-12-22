#include <stdio.h>

int	ft_is_upper(char c)
{
	return (c >= 65 && c <= 90);
}

int	ft_is_lower(char c)
{
	return (c >= 97  && c <= 122 );
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_is_upper(str[i])) || (ft_is_lower(str[i])))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char *str = "fgdsghha1";
	printf("%i", ft_str_is_alpha(str));
	return (0);
}
