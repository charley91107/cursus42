/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:54:49 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/20 20:31:56 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	//declaracion de un puntero tipo void
	void	*ptr;

	//utilizacion de MALLOC para asignar dinamicamente un bloque de memoria de tamaño count * size y se almacene en el puntero ptr.
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	//se utiliza la funcion ft_bzero para establecer todos los bytes en el bloque de memoria recien asignado a cero.
	ft_bzero(ptr, size * count);
	return (ptr);
}
