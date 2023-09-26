/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:43:08 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/21 18:24:07 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	/*
	Aquí, se utiliza la función malloc para asignar dinámicamente memoria para la copia. 
	*/
	copy = (char *)malloc(ft_strlen(s1) + 1);
	if (copy == NULL)
		return (NULL);
	/*
	Aquí se utiliza una función llamada ft_strlcpy para copiar el contenido de la cadena s1 en copy
 	La longitud de la copia se calcula nuevamente como ft_strlen(s1) + 1.
	*/
	ft_strlcpy(copy, s1, ft_strlen(s1) + 1);
	return (copy);
}
