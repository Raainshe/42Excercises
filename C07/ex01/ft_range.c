/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:02:17 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/13 09:56:36 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	*ft_range(int min, int max)
{
	unsigned int	range;
	unsigned int	i;
	int				*nums;

	if (min >= max)
		return (NULL);
	range = max - min;
	i = 0;
	nums = malloc(sizeof(int) * range);
	if (nums == NULL)
		return (NULL);
	while (i < range)
	{
		nums[i] = min + i;
		i++;
	}
	return (nums);
}
// #include <stdio.h>
// void print_range(int *range, int size) {
//     if (range == NULL) {
//         printf("NULL\n");
//         return ;
//     }
//     for (int i = 0; i < size; i++) {
//         printf("%d ", range[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int *range;

//     // Test Case 1: Basic Positive Range
//     range = ft_range(1, 5);
//     print_range(range, 4);
//     free(range);

//     // Test Case 2: Basic Negative Range
//     range = ft_range(-3, 2);
//     print_range(range, 5);
//     free(range);

//     // Test Case 3: Empty Range
//     range = ft_range(3, 3);
//     print_range(range, 0);

//     // Test Case 4: Invalid Range
//     range = ft_range(10, 5);
//     print_range(range, 0);

//     // Test Case 5: Large Range
//     range = ft_range(0, 1000);
//     print_range(range, 1000);
//     free(range);

//     // Test Case 6: Single Element Range
//     range = ft_range(0, 1);
//     print_range(range, 1);
//     free(range);

//     // Test Case 7: Zero Range
//     range = ft_range(0, 0);
//     print_range(range, 0);

//     // Test Case 8: Minimum Integer Value
//     range = ft_range(-2147483648, -2147483645);
//     print_range(range, 3);
//     free(range);

//     // Test Case 9: Malloc Failure Simulation
//     range = ft_range(0, 1000000000);
//     print_range(range, 0);

//     // Test Case 10: Non-sequential Negative Range
//     range = ft_range(-10, -7);
//     print_range(range, 3);
//     free(range);

//     return (0);
// }
