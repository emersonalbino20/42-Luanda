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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "Casa";
	char	s2[] = "Casarao";
	printf("%i", ft_strncmp(s1, s2, 4));
	return (0);
}
