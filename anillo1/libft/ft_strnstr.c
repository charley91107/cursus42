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
/*
que busca una subcadena needle en una cadena más grande haystack, con un límite
de longitud dado por el parámetro len. La función devuelve un puntero a la 
primera aparición de needle en haystack dentro del límite de longitud, o NULL 
si needle no se encuentra en haystack.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	// Declaración de punteros y variables para la posición y longitud.
	const char	*p1;
	const char	*p2;
	size_t		i;
	size_t		j;

	// Inicialización de los punteros y variables.
	p1 = haystack;
	p2 = needle;
	i = 0;
	j = 0;
	
	// Bucle exterior para recorrer 'haystack' hasta la longitud 'len'.
	while (p1[i] && i < len)
	{
		// Bucle interior para comparar 'needle' con la subcadena de 'haystack'.
		while (p1[i + j] == p2[j] && p2[j] != '\0' && i + j < len)
			j++;
		
		// Si se encontró la subcadena completa, devolver el puntero a la posición inicial de la subcadena en 'haystack'.
		if (p2[j] == '\0')
			return ((char *)(p1 + i));
		
		// Si no se encontró la subcadena, continuar buscando en 'haystack'.
		i++;
		j = 0;
	}
	
	// Si 'needle' es una cadena vacía, devolver el puntero a 'haystack'.
	if (p2[j] == '\0')
		return ((char *)p1);
	
	// Si no se encontró la subcadena y 'needle' no es una cadena vacía, devolver NULL.
	return (NULL);
}

