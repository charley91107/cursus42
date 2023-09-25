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
#include "libft.h"

/*
const void *s es un puntero a una region de memora en la que queremos buscar el byte especifico
int c es el byt que buscamos
size_t n es el numero de bytes en los que queremos buscar
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	/*
 	se declara un puntero que se inicia en eel valor de s, pero se 
	trata como puntero de caracteres sin signo para garantizar la correcta comparacion de los bytes*/
	p = (const unsigned char *)s;
	/*
 	itera n veces por la memoria hasta que n sea igual a 0 o hasta que p == c. si encuentra coinidencia
	devuelve la ubicacion del puntero, y si no devuelve null
	*/
	while (n > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
		n--;
	}
	return (NULL);
}
