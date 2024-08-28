/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarante <agarante@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:59:38 by agarante          #+#    #+#             */
/*   Updated: 2024/08/11 16:59:41 by agarante         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(char *input, int *constraints);
void	initialize_grid(int grid[4][4]);
int		rush(int grid[4][4], int *constraints);
void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	constraints[16];
	int	grid[4][4];

	if (argc != 2 || !parse_input(argv[1], constraints))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	initialize_grid(grid);
	if (rush(grid, constraints))
	{
		print_grid(grid);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
