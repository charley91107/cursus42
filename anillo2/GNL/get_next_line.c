/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:58:55 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/11/08 13:03:21 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char *storage)
{
	int		i;
	char	*new_line;

	i = 0;
	if (!storage[i])
		return (NULL);
	while (storage[i] && storage[i] != '\n')
		i++;
	new_line = (char *)malloc(sizeof(char) * (i + 2));
	if (!new_line)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
	{
		new_line[i] = storage[i];
		i++;
	}
	if (storage[i] == '\n')
	{
		new_line[i] = storage[i];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

char	*ft_read(int fd, char *storage)
{
	int		bytesr;
	char	*buffer;

	bytesr = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(storage, '\n') && bytesr != 0)
	{
		bytesr = read(fd, buffer, BUFFER_SIZE);
		if (bytesr == -1)
		{
			free(buffer);
			free(storage);
			return (NULL);
		}
		buffer[bytesr] = '\0';
		storage = ft_strjoin(storage, buffer);
	}
	free (buffer);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = ft_read(fd, storage);
	if (!storage)
		return (NULL);
	line = ft_get_line(storage);
	// if (!line)
	// {
	// 	free (storage);
	// 	return (NULL);
	// }
	storage = ft_nextstr(storage);
	return (line);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() 
// {
//     char *storage = strdup ("Esta es la primera linea\n Esta es la segunda linea\nEsta es la tercera linea\n");
//     char *nextLine;

//     printf("Contenido original:\n%s\n", storage);

//     while ((nextLine = ft_nextstr(storage)) != NULL) {
//         printf("Siguiente línea: %s\n", nextLine);
//         free(nextLine); // Liberar memoria asignada por ft_nextstr
//     }

//     free(storage); // Liberar memoria asignada por strdup
//     return 0;
// }
