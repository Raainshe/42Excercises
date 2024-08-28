/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:16:41 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/03 15:44:47 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_new_line(int x)
{
	if (x == 1)
	{
		ft_putchar('\n');
	}
}

void	print_bottom(int x, int ix, int y, int iy)
{
	if (iy == y && ix == 1 && y > 1)
	{
		ft_putchar('\\');
		print_new_line(x);
	}
	if (ix == x && iy == y && y > 1 && x > 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
}

void	print_top(x, ix, y, iy)
{
	while (ix <= x)
	{
		if (ix == 1 && iy == 1)
		{
			ft_putchar('/');
			print_new_line(x);
		}
		if (ix == x && iy == 1 && x > 1)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		if (ix != 1 && ix != x)
			ft_putchar('*');
		print_bottom(x, ix, y, iy);
		ix++;
	}
}

void	print_middle(x, ix, y, iy)
{
	while (ix <= x)
	{
		if (ix == 1 || ix == x)
		{
			ft_putchar('*');
			if (ix == x)
			{
				ft_putchar('\n');
			}
		}
		else
		{
			ft_putchar(' ');
		}
		ix++;
	}
}

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		if (iy == 1 || iy == y)
		{
			print_top(x, ix, y, iy);
		}
		else
		{
			print_middle(x, ix, y, iy);
		}
		iy++;
	}
}
