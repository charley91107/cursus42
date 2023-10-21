/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:32:39 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 21:27:40 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
que compara los primeros n caracteres de dos cadenas de texto (s1 y s2)
*/
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i; // Variable para iterar a través de los caracteres de las cadenas

    i = 0; // Inicializar el índice a 0
    while (i < n && s1[i] && s2[i]) // Mientras no hayamos alcanzado el límite n y ambas cadenas no hayan terminado
    {
        if (s1[i] != s2[i]) // Si los caracteres actuales son diferentes
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]); // Devolver la diferencia entre los caracteres
        }
        i++; // Mover al siguiente carácter
    }

    // En este punto, al menos una cadena ha terminado o hemos alcanzado el límite n
    while (i < n && ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0')))
        // Mientras no hayamos alcanzado el límite n y una cadena ha terminado mientras la otra no
        return ((unsigned char)s1[i] - (unsigned char)s2[i]); // Devolver la diferencia entre los caracteres

    return (0); // Si las cadenas son iguales o hemos llegado al límite n, devolver 0
}

