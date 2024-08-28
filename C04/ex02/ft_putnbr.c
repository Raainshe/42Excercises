/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:51:48 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/10 13:24:15 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reverse_print(char *snum, int len)
{
	len--;
	while (len >= 0)
	{
		write(1, &snum[len], 1);
		len--;
	}
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

// int main(void)
// {
//     ft_putnbr(2147483647);
// }