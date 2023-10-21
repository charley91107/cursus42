/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:20:27 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/24 13:05:13 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
busca la primera aparición de un carácter dado (c) en una cadena de caracteres (s).
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i; // Se declara una variable entera para usar como índice en la cadena

	i = 0; // Se inicializa el índice en 0
	while (s[i]) // Mientras no se llegue al final de la cadena (caracter nulo '\0')
	{
		if (s[i] == (char)c) // Si el carácter actual es igual al carácter que estamos buscando
			return ((char *)&s[i]); // Devuelve un puntero al lugar donde se encontró el carácter
		i++; // Incrementa el índice para pasar al siguiente carácter en la cadena
	}
	if (s[i] == (char)c) // Si se encontró el carácter en la última posición de la cadena
		return ((char *)&s[i]); // Devuelve un puntero a esa posición
	if (c == '\0') // Si el carácter que estamos buscando es el carácter nulo ('\0')
		return ((char *)&s[i]); // Devuelve un puntero al final de la cadena
	return (NULL); // Si no se encuentra el carácter y no estamos buscando el carácter nulo, devuelve NULL
}

