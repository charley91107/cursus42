/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:49:18 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/20 17:23:28 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	longdest;
	size_t	longsrc;

	longdest = ft_strlen(dest);
	longsrc = ft_strlen(src);
	/*
	j se inicializa con la longitud de la cadena de destino dest.
	*/
	j = longdest;
	i = 0;
	/*
	Esta condición asegura que hay espacio suficiente en dest para copiar los caracteres de src 
 	sin desbordar el búfer.
	*/
	if (longdest < n - 1 && n > 0)
	{
		while (src[i] && longdest + i < n - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	/*
	Esta condición verifica si la longitud de dest después de la concatenación es 
	mayor o igual a n. Si es así, se establece longdest en n para indicar que el 
	destino se ha llenado completamente.
	*/
	if (longdest >= n)
		longdest = n;
	return (longdest + longsrc);
}	
