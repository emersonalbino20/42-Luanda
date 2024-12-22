/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:23:51 by ealbino           #+#    #+#             */
/*   Updated: 2024/22/08 21:55:51 by ealbino          ###   ########.fr       */
/*                                                                            */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90)  && !(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "CAsa";
	printf("%i\n", ft_str_is_alpha(str));
	return (9);
}
