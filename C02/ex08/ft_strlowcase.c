/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:54:24 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/06 10:47:01 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <string.h>
// // Function to run a single test case
// void run_test(char *input, const char *expected) {
//     char str[100]; // Buffer large enough for test cases
//     strcpy(str, input); // Copy input to buffer to avoid modifying original
//     char *result = ft_strlowcase(str);
//     printf("Input: \"%s\" | Expected: \"%s\" | Result: \"%s\"\n", input,
//	expected, result);
// }

// int main() {
//     // Test cases
//     run_test("", "");                     // Test with an empty string
//     run_test("HELLO", "hello");           // Test with uppercase letters
//     run_test("world", "world");           // Test with lowercase letters
//     run_test("HeLLo WoRLd", "hello world");// Test with mixed case
//     run_test("1234!@#$", "1234!@#$");    
	// Test with numbers and special characters
//     run_test("A", "a");                  
	// Test with a single uppercase letter
//     run_test("a", "a");                  
	// Test with a single lowercase letter
//     run_test("12345", "12345");          
	// Test with no letters (only numbers)
//     run_test("ABC123!@#", "abc123!@#");  
	// Test with uppercase and non-alphabetic characters
//     run_test("   ", "   ");               // Test with whitespace characters

//     return (0);
// }