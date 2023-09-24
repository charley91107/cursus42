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
#include "libft.h"

void	*ft_memset(void *str2, int f, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = str2;
	i = 0;
	while (i < n)
	{
		aux[i] = (unsigned char)f;
		i++;
	}
	return (str2);
}
