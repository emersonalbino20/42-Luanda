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

int	partition(int *v, int start, int end)
{
	int	pivet;

	pivet = (v[start] + v[end] + v[(start + end) / 2]) / 3;
	while (start < end)
	{
		while (start < end && v[start] <= pivet)
			start++;
		while (start < end && v[end] > pivet)
			end--;
		int aux = v[start];
		v[start] = v[end];
		v[end] = aux;
	}
	return (start);
}

void	quick_sort (int *v, int start, int end)
{
	int	pos;
	if (start < end)
	{
		pos = partition(v, start, end);
		quick_sort(v, start, pos - 1);
		quick_sort(v, pos, end);
	}
}

void	print(int *v, int size)
{
	int	i;

	for (i = 0; i <= size; i++)
	{
		printf("%d ,", v[i]);
	}
	printf("\n");
}

int	main(void)
{
	int	vect[] = {47, 35, 12, 49, 56, 25, 71, 83, 5, 3, 1, 70, 99, 10, 61};
	print(vect, 14);
	quick_sort(vect, 0, 14);
	print(vect, 14);
	return (0);
}
