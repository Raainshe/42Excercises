/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:10:37 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/21 10:13:25 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	s_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*copy;

	len = s_len(src);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s;
	int			i;

	i = 0;
	s = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!s)
		return (NULL);
	while (i < ac && av[i])
	{
		s[i].size = s_len(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		if (!s[i].copy)
		{
			while (i >= 0)
				free(s[i--].copy);
			free(s);
			return (NULL);
		}
		i++;
	}
	s[i].str = NULL;
	return (s);
}
