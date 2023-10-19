/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:41:03 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 22:21:52 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
La función memcpy se utiliza para copiar un bloque de memoria de una ubicación a otra
*/

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t      i;
    char        *dest_c;
    const char  *src_c;

    // Convierte los punteros de void a punteros de char para trabajar byte a byte.
    src_c = src;
    dest_c = dest;

    i = 0;
    // Itera hasta que se copien 'n' bytes o hasta que uno de los punteros sea NULL.
    while (i < n && (dest != NULL || src != NULL))
    {
        // Copia un byte de la ubicación de memoria apuntada por src_c a dest_c.
        dest_c[i] = src_c[i];
        i++;
    }
    // Devuelve un puntero al destino (dest) después de copiar los datos.
    return (dest);
}

