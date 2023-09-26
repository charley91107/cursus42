/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:58:07 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/22 20:08:49 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*substring;
	size_t	lens1;
	size_t	lens2;
	size_t	totallen;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	totallen = lens1 + lens2;
	/*
 	Se asigna memoria dinámica para la cadena resultante substring
	*/
	substring = (char *)malloc((totallen + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	/*
	Se copia la cadena s1 en substring utilizando ft_strlcpy
	*/
	ft_strlcpy(substring, s1, lens1 + 1);
	/*
 	Se copia la cadena s2 en substring justo después de la primera cadena, 
  	*/
	ft_strlcpy(substring + lens1, s2, lens2 + 1);
	return (substring);
}
