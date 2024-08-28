/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:03:48 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/19 15:08:55 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	is_factor;

	if (nb < 0)
		return (0);
	is_factor = 1;
	while ((is_factor * is_factor <= nb) && is_factor <= 46340)
	{
		if ((is_factor * is_factor) == nb)
		{
			return (is_factor);
		}
		is_factor++;
	}
	return (0);
}

// #include <stdio.h>

// // Function prototype
// int		ft_sqrt(int nb);

// // Test case 1: Perfect square number
// void	test_case_1(void)
// {
// 	int	result;

// 	result = ft_sqrt(16);
// 	printf("Test Case 1: Input = 16, Expected Output = 4, Actual Output = %d\n",
// 		result);
// }

// // Test case 2: Non-perfect square number
// void	test_case_2(void)
// {
// 	int	result;

// 	result = ft_sqrt(20);
// 	printf("Test Case 2: Input = 20, Expected Output = 0, Actual Output = %d\n",
// 		result);
// }

// // Test case 3: Square of 1 (smallest non-zero positive integer)
// void	test_case_3(void)
// {
// 	int	result;

// 	result = ft_sqrt(1);
// 	printf("Test Case 3: Input = 1, Expected Output = 1, Actual Output = %d\n",
// 		result);
// }

// // Test case 4: Square of 0
// void	test_case_4(void)
// {
// 	int	result;

// 	result = ft_sqrt(0);
// 	printf("Test Case 4: Input = 0, Expected Output = 0, Actual Output = %d\n",
// 		result);
// }

// // Test case 5: Large perfect square number
// void	test_case_5(void)
// {
// 	int	result;

// 	result = ft_sqrt(144);
// 	printf("Test Case 5: Input = 144, Expected Output = 12,
// Actual Output =%d\n", result);
// }

// // Test case 6: Negative number (invalid input)
// void	test_case_6(void)
// {
// 	int	result;

// 	result = ft_sqrt(-25);
// 	printf("Test Case 6: Input = -25, Expected Output = -1,
// Actual Output =%d\n", result);
// }

// // Test case 7: Large non-perfect square number
// void	test_case_7(void)
// {
// 	int	result;

// 	result = ft_sqrt(145);
// 	printf("Test Case 7: Input = 145, Expected Output = 0, Actual Output =%d\n",
// result);
// }

// int	main(void)
// {
// 	test_case_1();
// 	test_case_2();
// 	test_case_3();
// 	test_case_4();
// 	test_case_5();
// 	test_case_6();
// 	test_case_7();
// 	return (0);
// }
