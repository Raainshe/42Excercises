/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:09:53 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/07 11:50:47 by rmakoni          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_len;

	i = 0;
	d_len = s_length(dest);
	while (src[i])
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}

// #include <stdio.h>

// // Assuming s_length and ft_strcat are implemented as above.

// int main() {
//     // Test Case 1: Basic Concatenation
//     char dest1[50] = "Hello, ";
//     char src1[] = "world!";
//     printf("Test Case 1: %s (Expected: Hello, world!)\n", ft_strcat(dest1,
//		src1));

//     // Test Case 2: Empty Source String
//     char dest2[50] = "Hello, ";
//     char src2[] = "";
//     printf("Test Case 2: %s (Expected: Hello, )\n", ft_strcat(dest2, src2));

//     // Test Case 3: Empty Destination String
//     char dest3[50] = "";
//     char src3[] = "world!";
//     printf("Test Case 3: %s (Expected: world!)\n", ft_strcat(dest3, src3));

//     // Test Case 4: Source and Destination are the Same String
//     // Note: Normally, this would cause undefined behavior,
//	but let's assume we allow this case for testing.
//     char dest4[50] = "hello";
//     printf("Test Case 4: %s (Expected: hellohello)\n", ft_strcat(dest4,
//		dest4));

//     // Test Case 5: Both Source and Destination Empty
//     char dest5[50] = "";
//     char src5[] = "";
//     printf("Test Case 5: %s (Expected: )\n", ft_strcat(dest5, src5));

//     // Test Case 6: Concatenation with Special Characters
//     char dest6[50] = "Hello, ";
//     char src6[] = "world!\nNew Line.";
//     printf("Test Case 6: %s (Expected: Hello, world!\nNew Line.)\n",
//	ft_strcat(dest6, src6));

//     return (0);
// }