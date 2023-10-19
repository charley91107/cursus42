/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:44:21 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:34 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
este código implementa una versión básica de la función memchr, que busca un 
carácter específico en una región de memoria dada y devuelve un puntero a la primera aparición de ese carácter.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	/*Se declara un puntero p a un carácter sin signo, que se utiliza para recorrer la memoria a la que 
	apunta s.
 	Se declara un puntero p a un carácter sin signo, que se utiliza para recorrer la memoria a la que apunta 
  	s
 	*/
	p = (const unsigned char *)s;
	while (n > 0)
	{
		/* Dentro del bucle, se verifica si el byte apuntado por p es igual al carácter que estamos
		buscando (c). Si es así, la función devuelve un puntero a esa ubicación en la memoria
		*/
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
		n--;
	}
	return (NULL);
}
