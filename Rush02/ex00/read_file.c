/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:56:08 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/18 14:51:28 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	find_number(char *all_words, char *num);

char	*append_content(char *content, char *buffer, int total_size,
		int bytes_read)
{
	char	*new_c;
	int		i;

	new_c = (char *)malloc(total_size + bytes_read + 1);
	if (!new_c)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		new_c[i] = content[i];
		i++;
	}
	i = 0;
	while (i < bytes_read)
	{
		new_c[total_size + i] = buffer[i];
		i++;
	}
	free(content);
	new_c[total_size + bytes_read] = '\0';
	return (new_c);
}

char	*read_file(char *file_name)
{
	int		fd;
	int		bytes_read;
	int		total_size;
	char	*file;
	char	buffer[1024];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	file = NULL;
	bytes_read = read(fd, buffer, 1024);
	total_size = 0;
	while (bytes_read > 0)
	{
		file = append_content(file, buffer, total_size, bytes_read);
		if (!file)
			return (NULL);
		total_size += bytes_read;
		bytes_read = read(fd, buffer, 1024);
	}
	close(fd);
	return (file);
}

// opens the file reads file data (c filen_name, c number)
void	get_file_data(char *file_name, char *num)
{
	find_number(read_file(file_name), num);
}
