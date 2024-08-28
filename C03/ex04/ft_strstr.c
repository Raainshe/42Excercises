/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:11:29 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/07 12:16:13 by rmakoni          ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;
	int	valid;

	if (to_find[0] == '\0')
		return (str);
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
				return (&str[i]);
		}
		i++;
	}
	return ((char *)0);
}
