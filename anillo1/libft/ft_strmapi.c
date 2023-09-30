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
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*str

	/*
	]se utiliza la funcion ft_srtdup para duplicar la cadena de entrada y se le asigna la moemoria necesaria 
	para la nuvea cadena str
	*/
	str = ft_strdup(s);
	if (str == NULL || f == NULL)
		return (NULL);
	/*
 	bucle de mapeo, se entra en un bucle while que recoore cada caracter de la cadena de entrada s hasta llegar al caracter nulo.
  	en cada iteraccion del bucle se aplica la funcion de mapeo f al caracter de la posicion i de la cadena str. el resultado de esta 
   	operacion se le asigna de nuevo a str[i].
 	*/
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
