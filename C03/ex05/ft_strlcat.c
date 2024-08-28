/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:30:06 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/07 12:17:21 by rmakoni          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s_len;
	unsigned int	d_len;

	d_len = s_length(dest);
	s_len = s_length(src);
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] && i < size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (i < size - d_len - 1)
	{
		dest[d_len + i] = '\0';
	}
	else if (size > 0)
	{
		dest[size - 1] = '\0';
	}
	return (d_len + s_len);
}
// #include <stdio.h>
// void run_test_cases()
// {
//     char dest1[20] = "Hello, ";
//     char src1[] = "World!";
//     unsigned int size1 = sizeof(dest1);
//     unsigned int result1 = ft_strlcat(dest1, src1, size1);
//     printf("Test Case 1:\n");
//     printf("Resulting string: '%s' (Expected: 'Hello, World!')\n", dest1);
//     printf("Total length tried to create: %u (Expected: 13)\n", result1);
//     printf("Output was %s (Expected: not truncated)\n\n",
	//result1 >= size1 ? "truncated" : "not truncated");

//     char dest2[20] = "Hello, ";
//     char src2[] = "World!";
//     unsigned int size2 = 5; // Smaller than the length of "Hello, "
//     unsigned int result2 = ft_strlcat(dest2, src2, size2);
//     printf("Test Case 2:\n");
//     printf("Resulting string: '%s' (Expected: 'Hello, ')\n", dest2);
//     printf("Total length tried to create: %u (Expected: 13)\n", result2);
//     printf("Output was %s (Expected: truncated)\n\n",
	//result2 >= size2 ? "truncated" : "not truncated");

//     char dest3[20] = "Hello, ";
//     char src3[] = "World!";
//     unsigned int size3 = 10; // Enough to add part of "World!"
//     unsigned int result3 = ft_strlcat(dest3, src3, size3);
//     printf("Test Case 3:\n");
//     printf("Resulting string: '%s' (Expected: 'Hello, Wo')\n", dest3);
//     printf("Total length tried to create: %u (Expected: 13)\n", result3);
//     printf("Output was %s (Expected: truncated)\n\n",
	//result3 >= size3 ? "truncated" : "not truncated");

//     char dest4[20] = "";
//     char src4[] = "World!";
//     unsigned int size4 = sizeof(dest4);
//     unsigned int result4 = ft_strlcat(dest4, src4, size4);
//     printf("Test Case 4:\n");
//     printf("Resulting string: '%s' (Expected: 'World!')\n", dest4);
//     printf("Total length tried to create: %u (Expected: 6)\n", result4);
//     printf("Output was %s (Expected: not truncated)\n\n",
	//result4 >= size4 ? "truncated" : "not truncated");

//     char dest5[20] = "Hello, ";
//     char src5[] = "";
//     unsigned int size5 = sizeof(dest5);
//     unsigned int result5 = ft_strlcat(dest5, src5, size5);
//     printf("Test Case 5:\n");
//     printf("Resulting string: '%s' (Expected: 'Hello, ')\n", dest5);
//     printf("Total length tried to create: %u (Expected: 7)\n", result5);
//     printf("Output was %s (Expected: not truncated)\n\n",
	//result5 >= size5 ? "truncated" : "not truncated");
// }

// int main()
// {
//     run_test_cases();
//     return (0);
// }
