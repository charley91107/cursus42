/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:57:12 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 21:46:41 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p1;
	const char	*p2;
	size_t		i;
	size_t		j;

	p1 = haystack;
	p2 = needle;
	i = 0;
	j = 0;
	/*
	erifica si la cadena needle es una cadena vacía (termina inmediatamente con '\0'). 
	Si es así, devuelve un puntero al inicio de la cadena haystack.
	*/
	if (*p2 == '\0')
		return ((char *)p1);
	while (p1[i] && i < len)
	{
		while (p1[i + j] == p2[j] && p2[j] != '\0' && i + j < len)
			j++;
		if (p2[j] == '\0')
			return ((char *)(p1 + i));
		i++;
		j = 0;
	}
	if (p2[j] == '\0')
		return ((char *)p1);
	return (NULL);
}
