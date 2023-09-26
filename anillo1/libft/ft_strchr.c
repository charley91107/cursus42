/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:20:27 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 16:20:33 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		/*
  		Comprueba si el carácter actual en la cadena s es igual al carácter c que estamos buscando.
    		*/
		if (s[i] == (char)c)
			/*
			Si el carácter c se encuentra en la cadena s, devuelve un puntero al lugar en 
			la cadena donde se encuentra ese carácter.
			*/
			return ((char *)&s[i]);
		i++;
	}
	//se realiza una comprobación adicional para verificar si el último carácter de s es igual a c. 
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	/*se realiza una comprobación especial para el caso en el que c sea igual a '\0', 
	es decir, el carácter nulo. En este caso, devuelve un puntero al final de la cadena s.
	*/
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
