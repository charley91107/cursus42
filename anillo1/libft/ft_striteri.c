/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:45:13 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/30 15:42:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Esta función es útil cuando se quiere aplicar una operación específica a cada
carácter de una cadena junto con su posición en la cadena. Por ejemplo, se podría 
utilizar para modificar los caracteres en la cadena original según ciertas 
condiciones o para realizar cualquier otra operación que involucre tanto el 
carácter como su posición en la cadena.
*/

#include "libft.h"

// La función ft_striteri toma una cadena de caracteres (s) y un puntero a una función (f)
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i; // Variable para almacenar el índice de la cadena

	i = 0; // Inicializa el índice en 0
	if (s == NULL || f == NULL) // Verifica si la cadena o la función son nulas
		return ; // Si alguna de las dos es nula, la función no hace nada y retorna inmediatamente

	while (s[i]) // Itera a través de la cadena hasta encontrar el carácter nulo (fin de la cadena)
	{
		(*f)(i, &(s[i])); // Llama a la función f con el índice actual y la dirección del carácter actual en la cadena
		i++; // Incrementa el índice para pasar al siguiente carácter en la cadena
	}
}
