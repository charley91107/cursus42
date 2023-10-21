/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:45:08 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/18 20:53:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
calcula la longitud de una cadena de caracteres (string). 
*/
#include "libft.h"

size_t ft_strlen(const char *e)
{
    // Se declara una variable 'i' de tipo size_t para mantener el contador de caracteres.
    size_t i;
    
    // Se inicializa 'i' con 0 para contar los caracteres de la cadena.
    i = 0;
    
    // Este bucle while recorre la cadena de caracteres hasta encontrar el carácter nulo '\0',
    // que indica el final de la cadena.
    while (e[i])
        // Por cada caracter encontrado, incrementa el contador 'i'.
        i++;
    
    // Finalmente, la función devuelve el valor de 'i', que representa la longitud de la cadena.
    return (i);
}

