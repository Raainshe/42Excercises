/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:42:24 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/02 10:55:37 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'a';
	i = 1;
	while (i < 27)
	{
		write(1, &alphabet, 1);
		alphabet++;
		i++;
	}
}
