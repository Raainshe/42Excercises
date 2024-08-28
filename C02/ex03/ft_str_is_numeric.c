/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:27:21 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/06 10:42:54 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// // Test function for ft_str_is_numeric
// void test_ft_str_is_numeric() {
//     // Test case 1: Regular numeric string
//     {
//         char str[] = "1234567890";
//         int result = ft_str_is_numeric(str);
//         printf("Test case 1 - Expected: 1, Got: %d\n", result);
//     }

//     // Test case 2: String with alphabetic characters
//     {
//         char str[] = "1234abc567";
//         int result = ft_str_is_numeric(str);
//         printf("Test case 2 - Expected: 0, Got: %d\n", result);
//     }

//     // Test case 3: String with special characters
//     {
//         char str[] = "1234!567";
//         int result = ft_str_is_numeric(str);
//         printf("Test case 3 - Expected: 0, Got: %d\n", result);
//     }

//     // Test case 4: Empty string
//     {
//         char str[] = "";
//         int result = ft_str_is_numeric(str);
//         printf("Test case 4 - Expected: 1, Got: %d\n", result);
//     }

//     // Test case 5: String with mixed characters
//     {
//         char str[] = "1234 567";
//         int result = ft_str_is_numeric(str);
//         printf("Test case 5 - Expected: 0, Got: %d\n", result);
//     }
// }

// int main() {
//     test_ft_str_is_numeric();
//     return (0);
// }