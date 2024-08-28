/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:12:24 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/02 10:55:49 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'z';
	i = 1;
	while (i < 27)
	{
		write(1, &alphabet, 1);
		alphabet--;
		i++;
	}
}
