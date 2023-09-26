/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:28:43 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/22 13:33:42 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (s == NULL || start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	/*
	Ajuste de la longitud si es necesario. Si la suma del índice de inicio y la longitud es mayor 
	o igual que la longitud de la cadena, se ajusta la longitud para que la subcadena no se extienda 
	más allá del final de la cadena.
	*/
	if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	/*
	Se asigna memoria dinámica para la subcadena, que tendrá una longitud de "len + 1" caracteres
	*/
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	/*
	Copia de la subcadena desde la cadena original. Se copian "len" caracteres desde la cadena 
	original (s) comenzando en la posición "start" a la subcadena. 
	*/
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
