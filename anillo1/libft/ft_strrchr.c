/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:01:54 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 16:31:58 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
que busca la última aparición del carácter c en la cadena s
*/

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i; // Declaración de la variable entera i.

    i = ft_strlen(s); // Obtiene la longitud de la cadena s usando la función ft_strlen y la almacena en i.
    while (i >= 0) // Bucle while que se ejecuta mientras i sea mayor o igual a 0.
    {
        if (s[i] == (char)c) // Comprueba si el carácter en la posición i de la cadena s es igual al carácter c.
            return ((char *)&s[i]); // Si es igual, devuelve un puntero al carácter en la posición i de la cadena s.
        i--; // Decrementa el valor de i para verificar el siguiente carácter en la cadena.
    }
    return (NULL); // Si el carácter c no se encuentra en la cadena, devuelve NULL.
}
