/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:45:39 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/27 17:01:38 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Toma una cadena de caracteres (s) y una función (f) como argumentos. La función 
f se aplica a cada carácter de la cadena s, junto con su índice correspondiente, 
para producir una nueva cadena de caracteres.
*/

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;

    // Se reserva memoria para la nueva cadena usando la función ft_strdup.
    str = ft_strdup(s);
    
    // Se verifica si la memoria se ha asignado correctamente y si la función es válida.
    if (str == NULL || f == NULL)
        return (NULL);

    // Se itera a través de la cadena original s.
    i = 0;
    while (s[i])
    {
        // Se aplica la función f al carácter en la posición i y se guarda el resultado en str[i].
        str[i] = (*f)(i, str[i]);
        // Se mueve al siguiente carácter en la cadena.
        i++;
    }

    // Se devuelve la nueva cadena modificada.
    return (str);
}

