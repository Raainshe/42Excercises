/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:22:47 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/06 10:45:50 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// void run_test(char *str, int expected) {
//     int result = ft_str_is_printable(str);
//     printf("Input: \"%s\" | Expected: %d | Result: %d\n", str, expected,
// result);
// }

// int main() {
//     // Test cases
//     run_test("", 1);                 // Test with an empty string
//     run_test("Hello, World!", 1);    // Test with printable characters
//     run_test("Hello\nWorld", 0);     // Test with newline character
//     run_test("Hello\tWorld", 0);     // Test with tab character
//     run_test("     ", 1);            // Test with spaces only
//     run_test("@#$%^&*()", 1);        // Test with special characters
//     run_test("Hello\x01World", 0);
// Test with non-printable character \x01
//     run_test("Hello~World", 1);      // Test with highest printable character
//     run_test("Hello\x7FWorld", 0);
// Test with non-printable character \x7F
//     run_test("Hello\x1B[31mWorld", 0);
// Test with a mix of printable and non-printable characters

//     return (0);
// }