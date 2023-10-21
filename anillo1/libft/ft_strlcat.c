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
/*
concatena cadenas de caracteres de origen (src) en la cadena de destino (dest) con un límite dado (n).
*/

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;         // Variable de índice para recorrer la cadena de origen (src)
    size_t j;         // Variable de índice para la posición de concatenación en dest
    size_t longdest;  // Variable para almacenar la longitud de la cadena de destino (dest)
    size_t longsrc;   // Variable para almacenar la longitud de la cadena de origen (src)

    // Calcula la longitud de la cadena de destino
    longdest = ft_strlen(dest);
    // Calcula la longitud de la cadena de origen
    longsrc = ft_strlen(src);
    // Inicializa el índice de la cadena de destino
    j = longdest;
    // Inicializa el índice de la cadena de origen
    i = 0;

    // Verifica si hay espacio suficiente para concatenar src en dest
    if (longdest < n - 1 && n > 0)
    {
        // Copia los caracteres de src a dest hasta alcanzar el límite (n - 1)
        // o hasta que se alcance el final de src
        while (src[i] && longdest + i < n - 1)
        {
            dest[j] = src[i];
            j++;
            i++;
        }
        // Agrega el carácter nulo al final de la cadena resultante
        dest[j] = '\0';
    }

    // Si la longitud de dest es mayor o igual a n, ajusta longdest a n
    if (longdest >= n)
        longdest = n;

    // Retorna la longitud total de la cadena concatenada
    return (longdest + longsrc);
}
	
