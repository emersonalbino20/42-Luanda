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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	
	if (str == NULL)
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str = "casa";
	printf("%i\n", ft_str_is_lowercase(str));
	return (0);
}
