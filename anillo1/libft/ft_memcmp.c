/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:47:50 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 19:48:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	// mientras la 1 sea menor a la cantidad de tamaño a comparar compara el puntero 1 con el 2 hasta que sean diferentes. 
	// en ese momento realiza la resta para ver cual es mayor.
	while (i < n)
	{
		if (p1[i] != p2[i])
			return ((int)(p1[i] - p2[i]));
		i++;
	}
	return (0);
}
