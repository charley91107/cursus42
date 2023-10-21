/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:39:40 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/18 19:48:28 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_tolower(int c)
{
    // Verifica si el valor de c representa una letra mayúscula en ASCII
    if (c >= 'A' && c <= 'Z')
    {
        // Si es una letra mayúscula, suma 32 para convertirla en minúscula
        c += 32;
    }
    // Retorna el valor de c, que puede ser el mismo si no es una letra mayúscula
    // o el valor convertido a minúscula si es una letra mayúscula.
    return (c);
}

