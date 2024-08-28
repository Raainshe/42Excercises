/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:52:34 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/18 14:54:09 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strstr(char *str, char *to_find);

void	get_word(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0' && line[i] != ':')
		i++;
	while (line[i] != '\0' && (line[i] == ' ' || line[i] == ':'))
		i++;
	while (line[i] != '\0')
	{
		write(1, &line[i], 1);
		i++;
	}
}

char	*extract_line(char *all_words, int *index)
{
	int		start;
	int		end;
	int		i;
	char	*line;

	start = *index;
	end = start;
	while (all_words[end] != '\n' && all_words[end] != '\0')
		end++;
	line = (char *)malloc((end - start) + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		line[i] = all_words[start + i];
		i++;
	}
	line[end - start] = '\0';
	if (all_words[end] == '\n')
		*index = end + 1;
	else
		*index = end;
	return (line);
}

void	find_number(char *all_words, char *num)
{
	int		i;
	int		pos;
	char	*line;

	i = 0;
	while (all_words[i] != '\0')
	{
		line = extract_line(all_words, &i);
		if (!line)
			return ;
		pos = 0;
		while (line[pos] == num[pos] && num[pos] != '\0')
			pos++;
		if (num[pos] == '\0' && (line[pos] == ' ' || line[pos] == ':'))
		{
			get_word(line);
			free(line);
			break ;
		}
		free(line);
	}
}
