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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	
	c = *a;
	*a /= *b;
	*b = c % *b;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	printf("%i /= %i \n%i %%= %i\n", a, b, a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Results: \n1- %i;\n2- %i.\n", a, b);
	return (0);
}
