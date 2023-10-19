/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:08:30 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/21 12:59:47 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Espero que esto aclare cómo la función ft_memmove copia los datos de una 
ubicación a otra, incluso si las áreas de memoria de origen y destino se superponen.
*/

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    // Declaramos punteros para manipular los datos de destino y origen
    unsigned char *dest_c;
    unsigned const char *src_c;

    // Convertimos los punteros void a punteros de tipo unsigned char para poder manipular los datos byte a byte
    dest_c = (unsigned char *)dest;
    src_c = (unsigned const char *)src;

    // Verificamos si las áreas de memoria de destino y origen se superponen y decidimos la dirección de copia
    if (dest_c < src_c)
    {
        // Si no hay superposición, copiamos de forma ascendente
        while (len--)
            *dest_c++ = *src_c++;
    }
    else if (src_c < dest_c)
    {
        // Si hay superposición y src está antes en memoria que dest, copiamos de forma descendente
        dest_c += len;
        src_c += len;
        while (len--)
            *(--dest_c) = *(--src_c);
    }

    // Devolvemos un puntero al destino
    return (dest);
}
