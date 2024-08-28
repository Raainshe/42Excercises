/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarante <agarante@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:02:51 by agarante          #+#    #+#             */
/*   Updated: 2024/08/11 17:02:53 by agarante         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int grid[4][4], int row, int col, int num, int *constraints);
int	check_constraints(int grid[4][4], int *constraints);

int	rush(int grid[4][4], int *constraints)
{
	int	row;
	int	col;
	int	num;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (grid[row][col] == 0)
			{
				num = 1;
				while (num <= 4)
				{
					if (is_valid(grid, row, col, num, constraints))
					{
						grid[row][col] = num;
						if (solve(grid, constraints))
							return (1);
						grid[row][col] = 0;
					}
					num++;
				}
				return (0);
			}
			col++;
		}
		row++;
	}
	return (check_constraints(grid, constraints));
}

int	is_valid(int grid[4][4], int row, int col, int num, int *constraints)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
		{
			return (0);
		}
		i++;
	}
	(void)constraints;
	return (1);
}

int	check_constraints(int grid[4][4], int *constraints)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			(void)grid;
			(void)constraints;
			col++;
		}
		row++;
	}
	return (1);
}
