/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:04:36 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/12 13:59:23 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			x = 0;
			while (argv[i][x] != '\0')
			{
				write(1, &argv[i][x], 1);
				x++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
