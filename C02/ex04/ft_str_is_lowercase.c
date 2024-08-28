/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:43:19 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/06 10:43:45 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// void test_ft_str_is_lowercase() {
//     // Test case 1: Regular lowercase string
//     {
//         char str[] = "hello";
//         int result = ft_str_is_lowercase(str);
//         printf("Test case 1 - Expected: 1, Got: %d\n", result);
//     }

//     // Test case 2: String with uppercase characters
//     {
//         char str[] = "Hello";
//         int result = ft_str_is_lowercase(str);
//         printf("Test case 2 - Expected: 0, Got: %d\n", result);
//     }

//     // Test case 3: String with digits
//     {
//         char str[] = "hello123";
//         int result = ft_str_is_lowercase(str);
//         printf("Test case 3 - Expected: 0, Got: %d\n", result);
//     }

//     // Test case 4: String with special characters
//     {
//         char str[] = "hello!";
//         int result = ft_str_is_lowercase(str);
//         printf("Test case 4 - Expected: 0, Got: %d\n", result);
//     }

//     // Test case 5: Empty string
//     {
//         char str[] = "";
//         int result = ft_str_is_lowercase(str);
//         printf("Test case 5 - Expected: 1, Got: %d\n", result);
//     }

//     // Test case 6: String with mixed lowercase and other characters
//     {
//         char str[] = "hello world";
//         int result = ft_str_is_lowercase(str);
//         printf("Test case 6 - Expected: 0, Got: %d\n", result);
//     }
// }

// int main() {
//     test_ft_str_is_lowercase();
//     return (0);
// }