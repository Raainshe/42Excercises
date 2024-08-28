/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:58:51 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/07 17:06:55 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_count(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while ((src[i] != 0) && (size - 1 > i))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (str_count(src));
}

// #include <stdio.h>
// #include <string.h>

// void run_test(char *src, unsigned int size, char *expected_dest,
// 	unsigned int expected_length) {
//     char dest[100]; // Buffer large enough for test cases
//     unsigned int length = ft_strlcpy(dest, src, size);

//     printf("Source: \"%s\"\n", src);
//     printf("Destination: \"%s\"\n", dest);
//     printf("Expected Destination: \"%s\"\n", expected_dest);
//     printf("Returned Length: %u\n", length);
//     printf("Expected Length: %u\n", expected_length);
//     printf("------------------------------\n");
// }

// int main() {
//     // Test cases
//     run_test("", 10, "", 0);                           
// 	//Empty source string
//     run_test("Hello", 10, "Hello", 5);                  // Normal source,
// 	//large buffer
//     run_test("Hello, World!", 5, "Hell", 13);           // Normal source,
// 	//small buffer
//     run_test("Hello", 0, "", 5);                       
// 	//Destination buffer size of 0
//     run_test("He@#llo!", 10, "He@#llo!", 8);           
// 	//Source with special characters
//     run_test("abcd", 5, "abcd", 4);                    
// 	//Source size exactly the buffer size

//     return (0);
// }
