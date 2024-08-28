/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:01:47 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/04 20:05:22 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	sorted;

	sorted = 0;
	while (sorted == 0)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}
// #include <stdio.h>
// int main(void)
// {
//     int array[] = {23, 5, 89, 12, 34, 7, 78, 56, 1, 44, 67, 90, 15, 39, 82};

//     ft_sort_int_tab(array, 15);

//     for(int j = 0; j < 15; j++) {
//         printf("%d ", array[j]);
//     }
//     printf("\n");

// }