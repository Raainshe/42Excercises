/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:10:02 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/06 10:44:41 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// // Function to run a single test case
// void run_test(char *str, int expected) {
//     int result = ft_str_is_uppercase(str);
//     printf("Input: \"%s\" | Expected: %d | Result: %d\n", str, expected,
//	result);
// }

// int main() {
//     // Test cases
//     run_test("", 1);          // Test with an empty string
//     run_test("HELLO", 1);    
	// Test with a string containing only uppercase letters
//     run_test("Hello", 0);    
	// Test with a string containing lowercase letters
//     run_test("HELLO123", 0);  // Test with a string containing numbers
//     run_test("HELLO!", 0);   
	// Test with a string containing special characters
//     run_test("HELLOworld",
//	0);// Test with a mix of uppercase and lowercase letters
//     run_test("A", 1);         // Test with a single uppercase letter
//     run_test("a", 0);         // Test with a single lowercase letter
//     run_test("!!@#", 0);      // Test with special characters only
//     run_test("ABC!DEF", 0);  
	// Test with uppercase letters and special characters

//     return (0);
// }