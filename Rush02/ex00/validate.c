/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:32:35 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/18 14:54:48 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char str);

// returns 0 if valid, return 1 if invalid
int	validate_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_numeric(str[i]) == 1)
			return (1);
		i++;
	}
	i = 0;
	if (str[0] == '0' && ft_str_is_numeric(str[1]) == 0)
		return (1);
	return (0);
}
