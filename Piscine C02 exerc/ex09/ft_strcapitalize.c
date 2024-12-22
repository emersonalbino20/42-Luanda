/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 **:**:** by ealbino           #+#    #+#             */
/*   Updated: 0000/00/00 **:**:** by ealbino          ###   ########.fr       */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int	ft_is_numeric(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_is_upcase(char c)
{
	return (c >= 65 && c <= 90);
}

int	ft_is_lowcase(char c)
{
	return (c >= 97 && c <= 122);
}

int	ft_is_word(char c)
{
	return (ft_is_numeric(c) || ft_is_upcase(c) || ft_is_lowcase(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_word(str[i - 1]) && ft_is_lowcase(str[i]))
			str[i] -= 32;
		else if (ft_is_word(str[i - 1]) && ft_is_upcase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
