/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:50:31 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/16 11:32:55 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (('\t' <= c && '\r' >= c) || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	i_minus;
	int	num;

	i = 0;
	i_minus = 0;
	num = 0;
	while (str[i] != '\0' && is_space(str[i]) == 1)
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			i_minus++;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (i_minus % 2 == 1)
		return (-num);
	return (num);
}

// #include <stdio.h>
// void run_test_cases()
// {
//     char *test1 = "42";
//     printf("Test 1: Input: '%s'\n", test1);
//     printf("Expected Output: 42\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test1));

//     char *test2 = "   -42";
//     printf("Test 2: Input: '%s'\n", test2);
//     printf("Expected Output: -42\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test2));

//     char *test3 = "4193 with words";
//     printf("Test 3: Input: '%s'\n", test3);
//     printf("Expected Output: 4193\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test3));

//     char *test4 = "   +0";
//     printf("Test 4: Input: '%s'\n", test4);
//     printf("Expected Output: 0\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test4));

//     char *test5 = "   -00123";
//     printf("Test 5: Input: '%s'\n", test5);
//     printf("Expected Output: -123\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test5));

//     char *test6 = "12345 and more";
//     printf("Test 6: Input: '%s'\n", test6);
//     printf("Expected Output: 12345\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test6));

//     char *test7 = "--123";
//     printf("Test 7: Input: '%s'\n", test7);
//     printf("Expected Output: 0 (undefined behavior due to invalid input)\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test7));

//     char *test8 = "   ";
//     printf("Test 8: Input: '%s'\n", test8);
//     printf("Expected Output: 0\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test8));

//     char *test9 = "";
//     printf("Test 9: Input: '%s'\n", test9);
//     printf("Expected Output: 0\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test9));

//     char *test10 = " +1";
//     printf("Test 10: Input: '%s'\n", test10);
//     printf("Expected Output: 1\n");
//     printf("Actual Output: %d\n\n", ft_atoi(test10));
// }

// int main()
// {
//     run_test_cases();
//     return (0);
// }

#include <stdlib.h>
#include <unistd.h>
void fun(void)
{
	char *dup ;

	dup = (char *)malloc(5);

	int *arr;

	arr = (int *)malloc(sizeof(int) * 34); 
}
