/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:31:36 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/11 16:21:51 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void) {
//     char *src = "Ryan olla";
//     // Allocate memory for dest with the size of src
// 	//+ 1 for the null terminator
//     char *dest = malloc(strlen(src) + 1);

//     if (dest == NULL) {
//         // Handle memory allocation failure
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     ft_strncpy(dest, src, 3);

//     // Print the copied string
//     printf("%s\n", dest);

//     // Free the allocated memory
//     free(dest);

//     return (0);
// }