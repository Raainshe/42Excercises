/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_funtions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:35:17 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/18 14:43:28 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	s_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;
	int	valid;

	if (to_find[0] == '\0')
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			x = 0;
			valid = 1;
			while (to_find[x] && valid)
			{
				if (to_find[x] != str[i + x])
					valid = 0;
				x++;
			}
			if (valid == 1)
				return (i);
		}
		i++;
	}
	return (-1);
}
