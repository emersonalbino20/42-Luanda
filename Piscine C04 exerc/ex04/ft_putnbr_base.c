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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (!ft_strlen(base) || ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (i < ft_strlen(base) - 1)
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
			{
				return (0);
			}else{
				j++;	
			}
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		i++;
	}	
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	nu;
	char	result[ft_strlen(base)];

	nu = nbr;
	if (check_base(base) == 1)
	{
		if (nu < 0)
		{
			ft_putchar('-');
			nu *= -1;
		}
		i = 0;
		while (nu >= 1)
		{
			result[i] = base[nu % ft_strlen(base)];
			nu = nu / ft_strlen(base);
			i++;
		}
		result[i] = '\0';
	}else{
		return ;
	}
	
	i = ft_strlen(result);
	while (i >= 0)
	{
		ft_putchar(result[i]);
		i--;
	}

}

int	main(void)
{
	ft_putnbr_base(-26, "0123456789ABCDEF");
	return (0);

}
