/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:18:11 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/18 14:44:23 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		validate_num(char *str);
void	get_file_data(char *file_name, char *num);

int	main(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		if (validate_num(argv[1]) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		get_file_data("numbers.dict", argv[1]);
	}
	else
		get_file_data(argv[1], argv[2]);
}
