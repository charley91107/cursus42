/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:37:31 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/01 16:18:33 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
La función imprime la cadena de caracteres en el descriptor de archivo proporcionado
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	// Inicia un bucle while que recorre la cadena de caracteres hasta llegar al carácter nulo ('\0').
	while (*s)
	{
		// Escribe el carácter actual de la cadena en el descriptor de archivo proporcionado.
		write(fd, s, 1);
		
		// Mueve el puntero a la siguiente posición en la cadena.
		s++;
	}
}

