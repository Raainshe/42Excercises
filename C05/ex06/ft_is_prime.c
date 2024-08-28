/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:49:26 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/19 12:03:10 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;
	int	i;

	counter = 0;
	i = nb;
	if (nb < 2)
		return (0);
	while (i != 0)
	{
		if ((nb % i) == 0)
			counter++;
		i--;
	}
	if (counter == 2)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// // Function prototype
// int		ft_is_prime(int nb);

// // Test case 1: Prime number
// void	test_case_1(void)
// {
// 	int	result;

// 	result = ft_is_prime(7);
// 	printf("Test Case 1: Input = 7, Expected Output = 1, Actual Output = %d\n",
// 		result);
// }

// // Test case 2: Non-prime number
// void	test_case_2(void)
// {
// 	int	result;

// 	result = ft_is_prime(10);
// 	printf("Test Case 2: Input = 10, Expected Output = 0, Actual Output = %d\n",
// 		result);
// }

// // Test case 3: Edge case - 1 (not prime)
// void	test_case_3(void)
// {
// 	int	result;

// 	result = ft_is_prime(1);
// 	printf("Test Case 3: Input = 1, Expected Output = 0, Actual Output = %d\n",
// 		result);
// }

// // Test case 4: Edge case - 0 (not prime)
// void	test_case_4(void)
// {
// 	int	result;

// 	result = ft_is_prime(0);
// 	printf("Test Case 4: Input = 0, Expected Output = 0, Actual Output = %d\n",
// 		result);
// }

// // Test case 5: Smallest prime number
// void	test_case_5(void)
// {
// 	int	result;

// 	result = ft_is_prime(2);
// 	printf("Test Case 5: Input = 2, Expected Output = 1, Actual Output = %d\n",
// 		result);
// }

// // Test case 6: Large prime number
// void	test_case_6(void)
// {
// 	int result = ft_is_prime(7919); // 7919 is a prime number
// 	printf("Test Case 6: Input = 7919, Expected Output = 1,
//	Actual Output =%d\n", result);
// }

// // Test case 7: Large non-prime number
// void	test_case_7(void)
// {
// 	int	result;

// 	result = ft_is_prime(8000);
// 	printf("Test Case 7: Input = 8000, Expected Output = 0,
//	Actual Output =%d\n", result);
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
