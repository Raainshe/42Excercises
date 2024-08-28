/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:37:39 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/11 19:34:16 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

//#include <stdio.h>

// // Function prototype
// int ft_recursive_factorial(int nb);

// // Test case 1: Factorial of a Positive Integer (Valid Input)
// void test_case_1() {
//     int result = ft_recursive_factorial(5);
//     printf("Test Case 1: Input = 5, Expected Output = 120, Actual Output =
//	%d\n", result);
// }

// // Test case 2: Factorial of Zero
// void test_case_2() {
//     int result = ft_recursive_factorial(0);
//     printf("Test Case 2: Input = 0, Expected Output = 1, Actual Output =
//	%d\n", result);
// }

// // Test case 3: Factorial of One
// void test_case_3() {
//     int result = ft_recursive_factorial(1);
//     printf("Test Case 3: Input = 1, Expected Output = 1, Actual Output =
//	%d\n", result);
// }

// // Test case 4: Factorial of a Negative Number
// void test_case_4() {
//     int result = ft_recursive_factorial(-5);
//     printf("Test Case 4: Input = -5, Expected Output = 0, Actual Output =
//	%d\n", result);
// }

// // Test case 5: Factorial of a Large Number
// void test_case_5() {
//     int result = ft_recursive_factorial(10);
//     printf("Test Case 5: Input = 10, Expected Output = 3628800,
//	Actual Output = %d\n", result);
// }

// // Test case 6: Factorial of 2
// void test_case_6() {
//     int result = ft_recursive_factorial(2);
//     printf("Test Case 6: Input = 2, Expected Output = 2, Actual Output =
//	%d\n", result);
// }

// // Test case 7: Factorial of 3
// void test_case_7() {
//     int result = ft_recursive_factorial(3);
//     printf("Test Case 7: Input = 3, Expected Output = 6, Actual Output =
//	%d\n", result);
// }

// // Test case 8: Edge Case for Lower Bound
// void test_case_8() {
//     int result = ft_recursive_factorial(-1);
//     printf("Test Case 8: Input = -1, Expected Output = 0, Actual Output =
//	%d\n", result);
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

//     return (0);
// }