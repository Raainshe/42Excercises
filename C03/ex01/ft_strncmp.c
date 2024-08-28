/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:10:18 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/07 11:50:03 by rmakoni          ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	is1;
	unsigned int	is2;
	unsigned int	i;

	is1 = s_length(s1);
	is2 = s_length(s2);
	i = 0;
	while (s1[i] && i < n && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}

// #include <stdio.h>
// // Assuming ft_strncmp and s_length are already implemented.

// int main() {
//
// Test Case 1: Compare less than n characters (n < length of both strings)
//     printf("Test Case 1: %d (Expected: 0)\n", ft_strncmp("hello", "helly",
//		4)); // Expected output: 0

//     // Test Case 2: First string less within n characters
//     printf("Test Case 2: %d (Expected: < 0)\n", ft_strncmp("hello", "hellp",
//		5)); // Expected output: < 0

//     // Test Case 3: Second string less within n characters
//     printf("Test Case 3: %d (Expected: > 0)\n", ft_strncmp("hellp", "hello",
//		5)); // Expected output: > 0

//     // Test Case 4: Compare only n characters,
//	where n < length of both strings
//     printf("Test Case 4: %d (Expected: 0)\n", ft_strncmp("abcde", "abcfgh",
//		3)); // Expected output: 0

//     // Test Case 5: Compare up to a point where strings differ
//     printf("Test Case 5: %d (Expected: < 0)\n", ft_strncmp("abcdef",
//		"abcxyz", 6)); // Expected output: < 0

//     // Test Case 6: n is longer than both strings
//     printf("Test Case 6: %d (Expected: 0)\n", ft_strncmp("abc", "abc", 10));
// Expected output: 0

//     // Test Case 7: n is 0
//     printf("Test Case 7: %d (Expected: 0)\n", ft_strncmp("abc", "xyz", 0));
// Expected output: 0

//     // Test Case 8: Empty strings comparison
//     printf("Test Case 8: %d (Expected: 0)\n", ft_strncmp("", "", 3));
// Expected output: 0

//     // Test Case 9: One empty string
//     printf("Test Case 9a: %d (Expected: > 0)\n", ft_strncmp("abc", "", 3));
// Expected output: > 0
//     printf("Test Case 9b: %d (Expected: < 0)\n", ft_strncmp("", "abc", 3));
// Expected output: < 0

//     // Test Case 10: Case sensitivity
//     printf("Test Case 10: %d (Expected: < 0)\n", ft_strncmp("Apple", "apple",
//		5)); // Expected output: < 0

//     return (0);
// }