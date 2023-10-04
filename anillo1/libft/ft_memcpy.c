/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:41:03 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 22:21:52 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_c;
	const char	*src_c;

	src_c = src;
	dest_c = dest;
	i = 0;
	while (i < n && (dest != NULL || src != NULL))
	{
		/*
  		En cada iteración del bucle, un byte de datos se copia desde la ubicación de memoria apuntada por src_c 
    		a la ubicación de memoria apuntada por dest_c.
    		*/
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}
