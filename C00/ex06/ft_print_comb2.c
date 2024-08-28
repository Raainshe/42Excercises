/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:59:02 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/02 11:11:01 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	int	ia;
	int	ib;
	int	ic;
	int	id;

	ia = a - '0';
	ib = b - '0';
	ic = c - '0';
	id = d - '0';
	if (((ic * 10) + id) > ((ia * 10) + ib))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(a == '9' && b == '8' && c == '9' && d == '9'))
			write(1, ", ", 2);
	}
}

void	while_loops(char num, char num2, char num3, char num4)
{
	while (num <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					print(num, num2, num3, num4);
					num4++;
				}
				num4 = '0';
				num3++;
			}
			num3 = '0';
			num2++;
		}
		num2 = '0';
		num++;
	}
}

void	ft_print_comb2(void)
{
	char	num;
	char	num2;
	char	num3;
	char	num4;

	num = '0';
	num2 = '0';
	num3 = '0';
	num4 = '1';
	while_loops(num, num2, num3, num4);
}
