/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:02:49 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/07 11:51:16 by rmakoni          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_len;

	i = 0;
	d_len = s_length(dest);
	while (src[i] && i < nb)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}
// #include <stdio.h>

// // Assuming s_length and ft_strncat are implemented as described.

// int main() {
//     // Test Case 1: Basic Concatenation
//     char dest1[50] = "Hello, ";
//     char src1[] = "world!";
//     printf("Test Case 1: %s (Expected: Hello, world!)\n", ft_strncat(dest1,
//		src1, 6));

//     // Test Case 2: Concatenate Fewer Characters than `nb`
//     char dest2[50] = "Hello, ";
//     char src2[] = "world!";
//     printf("Test Case 2: %s (Expected: Hello, wor)\n", ft_strncat(dest2,
//		src2, 3));

//     // Test Case 3: Concatenate Zero Characters
//     char dest3[50] = "Hello, ";
//     char src3[] = "world!";
//     printf("Test Case 3: %s (Expected: Hello, )\n", ft_strncat(dest3, src3,
//0));

//     // Test Case 4: Source String Shorter than `nb`
//     char dest4[50] = "Hello, ";
//     char src4[] = "world";
//     printf("Test Case 4: %s (Expected: Hello, world)\n", ft_strncat(dest4,
//		src4, 10));

//     // Test Case 5: Destination String Empty
//     char dest5[50] = "";
//     char src5[] = "world!";
//     printf("Test Case 5: %s (Expected: world!)\n", ft_strncat(dest5, src5,
//		10));
//
//     // Test Case 6: Source String Empty
//     char dest6[50] = "Hello, ";
//     char src6[] = "";
//     printf("Test Case 6: %s (Expected: Hello, )\n", ft_strncat(dest6, src6,
//		5));

//     // Test Case 7: Concatenate More than Source String Length
//     char dest7[50] = "Hello, ";
//     char src7[] = "world!";
//     printf("Test Case 7: %s (Expected: Hello, world!)\n", ft_strncat(dest7,
//src7, 100));

//     // Test Case 8: Concatenate with Special Characters
//     char dest8[50] = "Special: ";
//     char src8[] = "!@#";
//     printf("Test Case 8: %s (Expected: Special: !@#)\n", ft_strncat(dest8,
//		src8, 3));

//     // Test Case 9: Concatenate to a String with Exact Buffer Size
//     char dest9[50] = "Buffer: ";
//     char src9[] = "123456789";
//     printf("Test Case 9: %s (Expected: Buffer: 12345678)\n",
//	ft_strncat(dest9, src9, 8));

//     return (0);
// }