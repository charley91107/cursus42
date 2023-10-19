/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:06:15 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/13 21:11:04 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
La función ft_memset se utiliza para llenar un bloque de memoria con un valor específico.
*/

#include "libft.h"

void *ft_memset(void *str2, int f, size_t n)
{
    unsigned char *aux; // Declara un puntero a caracteres sin signo
    size_t i; // Declara una variable para contar iteraciones

    aux = str2; // Asigna el puntero de entrada a aux para evitar cambiar str2
    i = 0; // Inicializa el contador de iteraciones

    // Itera sobre el bloque de memoria hasta alcanzar la longitud n
    while (i < n)
    {
        aux[i] = (unsigned char)f; // Asigna el valor entero f al elemento actual del bloque de memoria
        i++; // Incrementa el contador de iteraciones
    }

    return str2; // Devuelve un puntero al bloque de memoria modificado
}

