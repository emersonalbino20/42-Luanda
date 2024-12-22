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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	copytab[size];
	int	length;
	

	i = 0;
	length = size - 1;
	while (i < size)
	{
		copytab[i] = tab[length];
		length--;
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = copytab[i];
		i++;
	}
}

int	main(void)
{
	int	i = 0;
	int	size = 4;
	int	array[] = {4,3,2,1};
	int	*tab = array;

	ft_rev_int_tab(array, size);
	printf("%i", array[0]);
	printf("%i", array[1]);
	printf("%i", array[2]);
	printf("%i", array[3]);
	return (0);
}
