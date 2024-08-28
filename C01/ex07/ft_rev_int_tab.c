/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:55:18 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/04 20:03:36 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
		temp = tab[counter];
		tab[counter] = tab[size - 1 - counter];
		tab[size - 1 - counter] = temp;
		counter++;
	}
}
//#include <stdio.h>
// int main(void)
// {
//     int array[] = {23, 5, 89, 12, 34, 7, 78, 56, 1, 44, 67, 90, 15, 39, 82};
//     int *ptr = &array[0];
//     ft_rev_int_tab(ptr, 15);

//     for(int j = 0; j < 15; j++) {
//         printf("%d ", array[j]);
//     }
//     printf("\n");

// }