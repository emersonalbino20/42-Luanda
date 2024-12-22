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

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;
	
	i = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] >= 7 && str[i] <= 13))
	{
		i++;
	}
	sign = 1;
	while (str[i] != '\0' && (str[i] == 45 || str[i] == 43))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	nb = 0;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

int	main(void)
{
	char str[] = " ---+--+1234ab567";
	int	valor = ft_atoi(str);
	ft_putnbr(valor);
	return (0);
}
