/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:19:41 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/18 18:45:54 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
copia una cadena de origen (src) a una cadena de destino (dest) con un límite 
dado (n). La función devuelve la longitud de la cadena de origen (src), 
pero con un límite de n caracteres para la copia en dest. Si n es 0, la función 
no hace ninguna copia y simplemente devuelve la longitud de la cadena de origen.
*/

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int i; // Variable para el índice de la cadena de destino
	unsigned int j; // Variable para el índice de la cadena de origen

	i = 0; // Inicializa el índice de la cadena de destino
	j = 0; // Inicializa el índice de la cadena de origen

	while (src[j]) // Encuentra la longitud de la cadena de origen
		j++;

	if (n != 0) // Verifica si se debe realizar la copia (n es diferente de 0)
	{
		while (src[i] && i < (n - 1)) // Copia los caracteres de src a dest hasta alcanzar n o el final de src
		{
			dest[i] = src[i]; // Copia el carácter de src a dest
			i++; // Incrementa el índice de src y dest
		}
		dest[i] = '\0'; // Agrega el carácter nulo al final de la cadena de destino
	}

	return (j); // Devuelve la longitud de la cadena de origen
}

