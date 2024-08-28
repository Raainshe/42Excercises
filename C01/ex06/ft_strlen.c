/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:49:15 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/04 20:02:42 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	ilen;

	ilen = 0;
	while (*str)
	{
		ilen++;
		str++;
	}
	return (ilen);
}

// int main(void)
// {
//     char *str = "hello";

//     int i = ft_strlen(str);

//     char c = i + '0';
//     write(1, &c ,5);

// }