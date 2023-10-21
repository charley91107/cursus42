/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:43:08 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/21 18:24:07 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
duplica una cadena de caracteres (string) s1 en una nueva ubicación de memoria 
asignada dinámicamente.
*/

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *copy; // Se declara un puntero para almacenar la copia de la cadena.

    // Se asigna memoria dinámicamente para la copia de la cadena.
    copy = (char *)malloc(ft_strlen(s1) + 1);
    
    // Se verifica si la asignación de memoria fue exitosa.
    if (copy == NULL) {
        return (NULL); // Si no, se devuelve NULL para indicar un error.
    }
    
    // Se copia la cadena original en la nueva memoria asignada.
    // ft_strlcpy es una función que copia la cadena s1 en copy
    // asegurando que no se desborde el espacio de memoria reservado.
    // El tamaño de destino se pasa como ft_strlen(s1) + 1 para incluir el carácter nulo '\0' al final.
    ft_strlcpy(copy, s1, ft_strlen(s1) + 1);
    
    return (copy); // Se devuelve el puntero a la copia de la cadena.
}

