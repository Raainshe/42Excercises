/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:58:12 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/11 19:37:20 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// // Function prototype
// int ft_recursive_power(int nb, int power);

// // Test case 1: Positive base and positive power
// void test_case_1() {
//     int result = ft_recursive_power(2, 3);
//     printf("Test Case 1: Input = (2, 3), Expected Output = 8, Actual Output =
//	%d\n", result);
// }

// // Test case 2: Positive base and power of 0
// void test_case_2() {
//     int result = ft_recursive_power(5, 0);
//     printf("Test Case 2: Input = (5, 0), Expected Output = 1, Actual Output =
//	%d\n", result);
// }

// // Test case 3: Base of 0 and positive power
// void test_case_3() {
//     int result = ft_recursive_power(0, 3);
//     printf("Test Case 3: Input = (0, 3), Expected Output = 0, Actual Output =
//	%d\n", result);
// }

// // Test case 4: Base of 0 and power of 0 (edge case)
// void test_case_4() {
//     int result = ft_recursive_power(0, 0);
//     printf("Test Case 4: Input = (0, 0), Expected Output = 1, Actual Output =
//	%d\n", result);
// }

// // Test case 5: Positive base and power of 1
// void test_case_5() {
//     int result = ft_recursive_power(7, 1);
//     printf("Test Case 5: Input = (7, 1), Expected Output = 7, Actual Output =
//	%d\n", result);
// }

// // Test case 6: Negative base and even power
// void test_case_6() {
//     int result = ft_recursive_power(-3, 2);
//     printf("Test Case 6: Input = (-3, 2), Expected Output = 9,
//	Actual Output = %d\n", result);
// }

// // Test case 7: Negative base and odd power
// void test_case_7() {
//     int result = ft_recursive_power(-2, 3);
//     printf("Test Case 7: Input = (-2, 3), Expected Output = -8,
//	Actual Output = %d\n", result);
// }

//
// Test case 8: Positive base and negative power (undefined behavior
// in current implementation)
// void test_case_8() {
//     int result = ft_recursive_power(2, -3);
//     printf("Test Case 8: Input = (2, -3), Expected Output = 0,
//	Actual Output = %d\n", result);
// }

// // Test case 9: Large base and large power
// void test_case_9() {
//     int result = ft_recursive_power(2, 10);
//     printf("Test Case 9: Input = (2, 10), Expected Output = 1024,
//	Actual Output = %d\n", result);
// }

// // Test case 10: Edge case with large power
// void test_case_10() {
//     int result = ft_recursive_power(3, 5);
//     printf("Test Case 10: Input = (3, 5), Expected Output = 243,
//	Actual Output = %d\n", result);
// }

// int main() {
//     test_case_1();
//     test_case_2();
//     test_case_3();
//     test_case_4();
//     test_case_5();
//     test_case_6();
//     test_case_7();
//     test_case_8();
//     test_case_9();
//     test_case_10();

//     return (0);
// }
