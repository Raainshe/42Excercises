/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:17:09 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/11 16:22:10 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lcase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	is_spec(char c)
{
	if (!(('a' <= c && 'z' >= c) || (c >= 'A' && c <= 'Z') || (c >= '0'
				&& c <= '9')))
	{
		return (1);
	}
	return (0);
}

int	is_upper(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && check_lcase(str[i]) == 1)
		{
			str[i] -= 32;
		}
		if ((i != 0) && is_spec(str[i - 1]) == 1 && check_lcase(str[i]) == 1)
		{
			str[i] -= 32;
		}
		else
		{
			if ((i != 0) && (is_spec(str[i - 1]) == 0)
				&& (is_upper(str[i]) == 1))
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>

// void	run_test(char *input, const char *expected)
// {
// 	char	*result;

// 	char str[100];      // Buffer large enough for test cases
// 	strcpy(str, input); // Copy input to buffer to avoid modifying original
// 	result = ft_strcapitalize(str);
// 	printf("Input: \"%s\" | Expected: \"%s\" | Result: \"%s\"\n", input,
// 		expected, result);
// }

// int	main(void)
// {
// 	// Test cases
// 	run_test("", "");                       // Test with an empty string
// 	run_test("hello world", "Hello World"); // Test with lowercase letters
// 	run_test("hElLo WoRLd", "Hello World"); // Test with mixed case
// 	run_test("123hello 456world", "123Hello 456World");
// 	// Test with numbers and lowercase
// 	run_test("!hello", "!Hello");
// 	// Test starting with special character
// 	run_test("hello!world", "Hello!World");
// 	// Test with special characters as separators
// 	run_test("Hello world", "Hello World");
// 	// Test with first character uppercase
// 	run_test("wElCoMe to 42", "Welcome To 42");
// 	// Test with mixed case letters and numbers
// 	run_test("hello.world", "Hello.World");
// 	// Test with punctuation marks as word separators
// 	run_test("hello---world", "Hello---World");
// 	// Test with continuous special characters

// 	return (0);
// }