/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarante <agarante@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:59:51 by agarante          #+#    #+#             */
/*   Updated: 2024/08/11 16:59:53 by agarante         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

int	parse_input(char *input, int *constraints)
{
	int	i;

	i = 0;
	while (*input)
	{
		if (*input >= '1' && *input <= '4')
		{
			if (i < 16)
			{
				constraints[i++] = *input - '0';
			}
			else
			{
				return (0);
			}
		}
		else if (*input != ' ')
		{
			return (0);
		}
		input++;
	}
	return (i == 16);
}
