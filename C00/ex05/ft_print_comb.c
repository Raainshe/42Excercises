/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:20:33 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/02 09:08:37 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	if (c > b && b > a)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (!(a == '7' && b == '8' && c == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	num;
	char	num2;
	char	num3;

	num = '0';
	num2 = '1';
	num3 = '2';
	while (num <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				print(num, num2, num3);
				num3++;
			}
			num2++;
			num3 = num2;
		}
		num++;
		num2 = num;
	}
}
