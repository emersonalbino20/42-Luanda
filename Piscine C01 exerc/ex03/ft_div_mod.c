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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 2;

	int	div = a;
	int	mod = b;

	ft_div_mod(a, b, &div, &mod);
	printf(" %i / %i = %i\n %i %% %i = %i\n", a, b, div, a, b, mod);
	return (0);
}
