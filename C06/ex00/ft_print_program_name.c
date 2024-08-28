/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:05:28 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/11 14:22:33 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc != 0)
	{
		while (argv[0][x] != '\0')
		{
			write(1, &argv[0][x], 1);
			x++;
		}
		write(1, "\n", 1);
	}
}
