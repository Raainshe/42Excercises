/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:41:31 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/11 11:03:11 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// // Test function for ft_str_is_alpha
// void test_ft_str_is_alpha() {
//     // Test case 1: Regular alphabetic string
//     {
//         char str[] = "HelloWorld";
//         int result = ft_str_is_alpha(str);
//         printf("Test case 1 - Expected: 1, Got: %d\n", result);
//     }

//     // Test case 2: String with non-alphabetic characters
//     {
//         char str[] = "Hello123";
//         int result = ft_str_is_alpha(str);
//         printf("Test case 2 - Expected: 0, Got: %d\n", result);
//     }

//     // Test case 3: Empty string
//     {
//         char str[] = "";
//         int result = ft_str_is_alpha(str);
//         printf("Test case 3 - Expected: 1, Got: %d\n", result);
//     }

//     // Test case 4: String with spaces
//     {
//         char str[] = "Hello World";
//         int result = ft_str_is_alpha(str);
//         printf("Test case 4 - Expected: 0, Got: %d\n", result);
//     }

//     // Test case 5: String with special characters
//     {
//         char str[] = "Hello@World!";
//         int result = ft_str_is_alpha(str);
//         printf("Test case 5 - Expected: 0, Got: %d\n", result);
//     }
// }

// int main() {
//     test_ft_str_is_alpha();
//     return (0);
// }
