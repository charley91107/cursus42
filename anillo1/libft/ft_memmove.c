/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:08:30 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/21 12:59:47 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dest_c;
	unsigned const char	*src_c;

	dest_c = (unsigned char *)dest;
	src_c = (unsigned const char *)src;
	if (dest_c < src_c)
	{
		while (len--)
			*dest_c++ = *src_c++;
	}
	else if (src_c < dest_c)
	{
		dest_c += len;
		src_c += len;
		while (len--)
			*(--dest_c) = *(--src_c);
	}
	return (dest);
}
