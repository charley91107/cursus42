/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:58:07 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/24 12:10:41 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
concatena dos cadenas de caracteres (s1 y s2) en una nueva cadena.
*/

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *substring;
    size_t lens1;
    size_t lens2;
    size_t totallen;

    // Verifica si las cadenas de entrada son nulas y, en ese caso, devuelve nulo.
    if (s1 == NULL || s2 == NULL)
        return (NULL);

    // Calcula las longitudes de las cadenas de entrada.
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);

    // Calcula la longitud total de la cadena resultante.
    totallen = lens1 + lens2;

    // Asigna memoria dinámica para la nueva cadena.
    substring = (char *)malloc((totallen + 1) * sizeof(char));
    if (substring == NULL)
        return (NULL);

    // Copia el contenido de s1 en la nueva cadena.
    ft_strlcpy(substring, s1, lens1 + 1);

    // Concatena el contenido de s2 al final de la nueva cadena.
    ft_strlcpy(substring + lens1, s2, lens2 + 1);

    // Retorna la nueva cadena concatenada.
    return (substring);
}

