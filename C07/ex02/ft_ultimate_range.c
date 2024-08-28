/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:58:35 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/14 12:29:04 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	range_size;
	unsigned int	i;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	range_size = max - min;
	*range = malloc(sizeof(int) * range_size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < range_size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (range_size);
}

// #include <stdio.h>

// void	test_ft_ultimate_range(int min, int max)
// {
// 	int	*range;
// 	int	size;

// 	size = ft_ultimate_range(&range, min, max);
// 	printf("Test with min = %d, max = %d:\n", min, max);
// 	printf("Returned size: %d\n", size);
// 	if (range == NULL)
// 	{
// 		printf("Range is NULL\n");
// 	}
// 	else
// 	{
// 		for (int i = 0; i < size; i++)
// 		{
// 			printf("%d ", range[i]);
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	test_ft_ultimate_range(1, 5);
// 	test_ft_ultimate_range(-3, 2);
// 	test_ft_ultimate_range(3, 3);
// 	test_ft_ultimate_range(10, 5);
// 	test_ft_ultimate_range(0, 1);
// 	test_ft_ultimate_range(100, 200);
// 	test_ft_ultimate_range(-10, -5);
// 	test_ft_ultimate_range(-2147483648, -2147483646);
// 	test_ft_ultimate_range(-2, 2);
// 	return (0);
// }
