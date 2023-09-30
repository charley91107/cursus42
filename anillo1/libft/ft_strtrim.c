/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_trim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:15:59 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/24 13:11:20 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inicio;
	size_t	final;
	size_t	total;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	inicio = 0;
	while (s1[inicio] && ft_strchr(set, s1[inicio]))
		inicio++;
	final = ft_strlen(s1);
	while (final > inicio && ft_strchr(set, s1[final -1]))
		final--;
	total = final - inicio;
	result = (char *)malloc((total + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1 + inicio, total + 1);
	return (result);
}
