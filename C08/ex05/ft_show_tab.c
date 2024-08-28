/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:06:55 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/20 11:24:53 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	reverse_print(char *snum, int len)
{
	len--;
	while (len >= 0)
	{
		write(1, &snum[len], 1);
		len--;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	snum[12];
	int		i;
	int		r;
	int		is_neg;

	is_neg = 0;
	i = 0;
	if (nb == 0)
		snum[i++] = '0';
	if (nb < 0)
		is_neg = 1;
	while (nb != 0)
	{
		if (nb < 0)
			r = (-1) * (nb % 10);
		else
			r = nb % 10;
		snum[i++] = r + '0';
		nb = nb / 10;
	}
	if (is_neg)
		snum[i++] = '-';
	snum[i] = '\0';
	reverse_print(snum, i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		put_str(par[i].str);
		ft_putnbr(par[i].size);
		put_str(par[i].copy);
		i++;
	}
}
