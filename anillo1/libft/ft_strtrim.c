/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_trim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:15:59 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/24 13:11:20 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
elimina los caracteres especificados en el conjunto set del principio y del 
final de la cadena s1.
*/

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t inicio;
    size_t final;
    size_t total;
    char *result;

    // Verifica si los punteros de entrada son nulos y devuelve NULL si es así
    if (s1 == NULL || set == NULL)
        return (NULL);

    // Encuentra el índice del primer carácter que no está en el conjunto `set`
    inicio = 0;
    while (s1[inicio] && ft_strchr(set, s1[inicio]))
        inicio++;

    // Encuentra el índice del último carácter que no está en el conjunto `set`
    final = ft_strlen(s1);
    while (final > inicio && ft_strchr(set, s1[final - 1]))
        final--;

    // Calcula la longitud total del resultado después de eliminar los caracteres del conjunto `set`
    total = final - inicio;

    // Asigna memoria para el resultado más el carácter nulo al final
    result = (char *)malloc((total + 1) * sizeof(char));
    if (result == NULL)
        return (NULL);

    // Copia los caracteres relevantes de s1 al resultado
    ft_strlcpy(result, s1 + inicio, total + 1);

    // Devuelve el resultado
    return (result);
}

