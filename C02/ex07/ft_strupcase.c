/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:39:22 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/06 10:46:37 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <string.h>
// void run_test(char *input, char *expected) {
//     char str[100]; // Buffer large enough for test cases
//     strcpy(str, input); // Copy input to buffer to avoid modifying original
//     char *result = ft_strupcase(str);
//     printf("Input: \"%s\" | Expected: \"%s\" | Result: \"%s\"\n", input,
//	expected, result);
// }

// int main() {
//     // Test cases
//     run_test("", "");                     // Test with an empty string
//     run_test("hello", "HELLO");           // Test with lowercase letters
//     run_test("WORLD", "WORLD");           // Test with uppercase letters
//     run_test("HeLLo WoRLd", "HELLO WORLD");// Test with mixed case
//     run_test("1234!@#$", "1234!@#$");    
	// Test with numbers and special characters
//     run_test("a", "A");                  
	// Test with a single lowercase letter
//     run_test("A", "A");                  
	// Test with a single uppercase letter
//     run_test("12345", "12345");          
	// Test with no letters (only numbers)
//     run_test("abc123!@#", "ABC123!@#");  
	// Test with lowercase and non-alphabetic characters
//     run_test("   ", "   ");               // Test with whitespace characters

//     return (0);
// }
