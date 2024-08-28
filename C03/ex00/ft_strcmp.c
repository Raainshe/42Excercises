/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:52:31 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/07 11:48:19 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	s_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	is1;
	int	is2;
	int	i;

	is1 = s_length(s1);
	is2 = s_length(s2);
	i = 0;
	while (i < is1 && i < is2)
	{
		if ((s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (is1 < is2 || is1 > is2)
		return (is1 - is2);
	else
		return (0);
}

// #include <stdio.h>

// // Assuming ft_strcmp and s_length are already implemented.

// int main() {
//     // Test Case 1: Identical Strings
//     printf("Test Case 1: %d\n", ft_strcmp("hello", "hello"));
// Expected output: 0

//     // Test Case 2: First String Less
//     printf("Test Case 2: %d\n", ft_strcmp("Geek", "Geekboy"));
// Expected output: < 0

//     // Test Case 3: Second String Less
//     printf("Test Case 3: %d\n", ft_strcmp("banana", "apple"));
// Expected output: > 0

//     // Test Case 4: Different Lengths, Prefix Case
//     printf("Test Case 4: %d\n", ft_strcmp("apple", "apples"));
// Expected output: < 0

//     // Test Case 5: Case Sensitivity
//     printf("Test Case 5: %d\n", ft_strcmp("Apple", "apple"));
// Expected output: < 0

//     // Test Case 6: Empty Strings
//     printf("Test Case 6: %d\n", ft_strcmp("", "")); // Expected output: 0

//     // Test Case 7: One Empty String
//     printf("Test Case 7a: %d\n", ft_strcmp("hello", ""));
// Expected output: > 0
//     printf("Test Case 7b: %d\n", ft_strcmp("", "hello"));
// Expected output: < 0

//     return (0);
// }