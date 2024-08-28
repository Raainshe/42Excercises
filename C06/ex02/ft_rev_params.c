/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:23:53 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/12 13:54:53 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			x = 0;
			while (argv[i][x] != '\0')
			{
				write(1, &argv[i][x], 1);
				x++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}
