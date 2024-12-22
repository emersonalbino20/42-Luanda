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

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	long	bigger;

	bigger = nb;
	if (bigger < 0)
	{
		ft_putchar('-');
		bigger *= -1;
	}
	if (bigger / 10 != 0)
		ft_putnbr(bigger / 10);
	ft_putchar(bigger % 10 + '0');
}

int	main(void)
{
	ft_putnbr(45);
	return (0);
}
