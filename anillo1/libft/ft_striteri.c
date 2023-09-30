/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:45:13 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/30 15:42:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	/*
 	dentro del bucle se llama a la funcion f pasando dos argumentos: el valor de i(indice del caracter de la cadena)
  	y un puntero al caracter de la posicion i de la cadena s.
  	*/
	while (s[i])
	{
		(*f)(i, &(s[i]));
		i++;
	}
}
