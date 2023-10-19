/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:47:50 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 19:48:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Este código toma dos punteros a bloques de memoria (s1 y s2) y un tamaño n como entrada. Luego, 
compara los primeros n bytes de los bloques de memoria apuntados por s1 y s2. Si los bloques son iguales 
en los primeros n bytes, devuelve 0. Si encuentra una diferencia en algún byte, devuelve un valor negativo 
si el byte en s1 es menor que el byte en s2, y un valor positivo si es mayor.
*/

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *p1;
    const unsigned char *p2;

    // Convierte los punteros void * a punteros unsigned char *
    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;
    i = 0;

    // Compara los primeros n bytes de los bloques de memoria
    while (i < n)
    {
        // Si los bytes en las posiciones i son diferentes, devuelve la diferencia
        if (p1[i] != p2[i])
            return ((int)(p1[i] - p2[i]));
        i++;
    }

    // Si los bloques de memoria son iguales en los primeros n bytes, devuelve 0
    return (0);
}

