/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:43:58 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/14 12:30:03 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

int	all_len(char **strs, char *sep, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += str_len(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		total += str_len(sep);
		i++;
	}
	return (total);
}

void	add_sep(char *final, char *sep, int *f_pos)
{
	int	x;

	x = 0;
	while (sep[x] != '\0')
	{
		final[(*f_pos)++] = sep[x];
		x++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		x;
	int		f_pos;
	char	*final;

	f_pos = 0;
	if (size == 0)
		return ("");
	i = all_len(strs, sep, size);
	final = malloc(i);
	if (final == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != '\0')
			final[f_pos++] = strs[i][x++];
		if (i != size - 1)
			add_sep(final, sep, &f_pos);
		i++;
	}
	final[f_pos] = '\0';
	return (final);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*result;
// 	char	*strs1[] = {"Hello", "World", "!"};
// 	char	*strs2[] = {};
// 	char	*strs3[] = {"Single"};
// 	char	*strs4[] = {"", "", ""};
// 	char	*strs5[] = {"Hello", "World", "!"};
// 	char	*strs6[] = {"a", "b", "c"};
// 	char	*strs7[] = {"longstring1...", "longstring2..."};
// 	char	*strs9[] = {"short", "a bit longer", "longest 
//	string here", "s"};

// 	// Test Case 1: Basic Case
// 	result = ft_strjoin(3, strs1, ", ");
// 	printf("%s\n", result);
// 	free(result);
// 	// Test Case 2: Empty Array
// 	result = ft_strjoin(0, strs2, ", ");
// 	printf("'%s'\n", result);
// 	// Test Case 3: Single String
// 	result = ft_strjoin(1, strs3, ", ");
// 	printf("%s\n", result);
// 	free(result);
// 	// Test Case 4: Multiple Empty Strings
// 	result = ft_strjoin(3, strs4, ", ");
// 	printf("'%s'\n", result);
// 	free(result);
// 	// Test Case 5: No Separator Provided
// 	result = ft_strjoin(3, strs5, "");
// 	printf("%s\n", result);
// 	free(result);
// 	// Test Case 6: Long Separator
// 	result = ft_strjoin(3, strs6, "1234567890");
// 	printf("%s\n", result);
// 	free(result);
// 	// Test Case 7: Very Long Strings
// 	result = ft_strjoin(2, strs7, "+++");
// 	printf("%s\n", result);
// 	free(result);
// 	// Test Case 8: Null Separator (Optional - Handle carefully)
// 	// char *strs8[] = {"a", "b", "c"};
// 	// result = ft_strjoin(3, strs8, NULL);
// 	// printf("%s\n", result);  // May cause undefined behavior
// 	// Test Case 9: Different String Lengths
// 	result = ft_strjoin(4, strs9, " - ");
// 	printf("%s\n", result);
// 	free(result);
// 	// Test Case 10: Memory Allocation Failure Simulation
// 	// This test may require altering malloc to 
//	fail or simulating an environment with low memory.
// 	return (0);
// }
