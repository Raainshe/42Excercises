/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:39:14 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/14 12:28:35 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	s_lenth(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = s_lenth(src) + 1;
	dup = (char *)malloc(len);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// #include <stdio.h>
// void test_strdup(char *input) {
//     char *copy = ft_strdup(input);
//     if (copy == NULL) {
//         printf("Error: malloc failed or NULL input.\n");
//     } else {
//         printf("Original: '%s'\n", input);
//         printf("Copy:     '%s'\n", copy);
//         free(copy);
//     }
// }

// int main() {
//     // Test Case 1: Basic String
//     test_strdup("Hello, World!");

//     // Test Case 2: Empty String
//     test_strdup("");

//     // Test Case 3: Special Characters
//     test_strdup("!@#$%^&*()");

//     // Test Case 4: White Spaces
//     test_strdup("   ");

//     // Test Case 5: Newline and Tab Characters
//     test_strdup("Line1\nLine2\tEnd");

//     // Test Case 6: Single Character String
//     test_strdup("A");

//     // Test Case 8: Long String
//     test_strdup("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

//     // Test Case 9: String with Digits
//     test_strdup("1234567890");

//     return (0);
// }
