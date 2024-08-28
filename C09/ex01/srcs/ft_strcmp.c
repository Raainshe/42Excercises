/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:34:32 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/20 11:34:38 by rmakoni          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	is1;
	int	is2;
	int	i;

	is1 = s_length(s1);
	is2 = s_length(s2);
	i = 0;
	while (i < is1 && i < is2)
	{
		if ((s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (is1 < is2 || is1 > is2)
		return (is1 - is2);
	else
		return (0);
}
