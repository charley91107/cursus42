/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:28:43 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/22 13:33:42 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
que toma una cadena de caracteres (s), una posición de inicio (start) y una 
longitud (len), y devuelve una nueva cadena que representa la subcadena de la 
cadena original que comienza en la posición start y tiene una longitud máxima de 
len.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring; // Declara un puntero a char para almacenar la subcadena resultante

	// Comprueba si la cadena de entrada es nula, la posición de inicio es mayor o igual que la longitud de la cadena
	// o la longitud es 0. En cualquiera de estos casos, devuelve una cadena vacía.
	if (s == NULL || start >= ft_strlen(s) || len == 0)
		return (ft_strdup("")); // Utiliza ft_strdup para duplicar una cadena vacía y devolverla.

	// Si la suma de la posición de inicio y la longitud es mayor o igual que la longitud de la cadena original,
	// ajusta la longitud para que no sobrepase el final de la cadena original.
	if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;

	// Asigna memoria para la subcadena, más 1 byte adicional para el carácter nulo del final de la cadena.
	substring = (char *)malloc((len + 1) * sizeof(char));
	
	// Comprueba si la asignación de memoria fue exitosa.
	if (substring == NULL)
		return (NULL); // Si no, devuelve NULL para indicar un error.

	// Copia la subcadena desde la posición de inicio en la cadena original al nuevo bloque de memoria.
	ft_strlcpy(substring, s + start, len + 1);

	// Devuelve la subcadena recién creada.
	return (substring);
}

