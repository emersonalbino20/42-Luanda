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

/*Usei o algoritmo bubble sort pra ordenação de vectores*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)	
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	size = 5;
	int	i;
	int	arr[] = {5,11,0,22,1}; 
	int	*tab = arr;

	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
