/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:59:14 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/11/08 13:45:42 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *stor, char *buffer)
{
	char		*storage;
	size_t		i;
	size_t		j;

	if (!stor)
	{
		stor = (char *)malloc(1 * sizeof(char));
		stor[0] = '\0';
	}
	if (!stor || !buffer)
		return (NULL);
	storage = malloc((ft_strlen(stor) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!storage)
		return (NULL);
	i = -1;
	j = 0;
	if (stor)
		while (stor[i++] != '\0')
			storage[i] = stor[i];
	while (buffer)
		storage[i++] = buffer [j++];
	storage[ft_strlen(stor) + ft_strlen(buffer)] = '\0';
	free(stor);
	return (storage);
}

size_t	ft_strlen(char *e)
{
	size_t	i;

	i = 0;
	if (!e)
		return (0);
	while (e[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (n != 0)
	{
		while (src[i] && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

char	*ft_nextstr(char *storage)
{
	int		i;
	int		n;
	char	*new_line;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (!storage[i])
	{
		free(storage);
		return (NULL);
	}
	new_line = (char *) malloc(sizeof(char) * (ft_strlen(storage) - i + 1));
	if (!new_line)
		return (NULL);
	i++;
	n = 0;
	while (storage[i])
		new_line[n++] = storage[i++];
	new_line[n] = '\0';
	//free(storage);
	return (new_line);
}
