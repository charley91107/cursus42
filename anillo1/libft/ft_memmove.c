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
	//verificacion de que el puntesro dest este antes que el puntero src.(no hay superposicion)
	if (dest_c < src_c)
	{
		//si se cumple la condicion se copian los de (delante a atras)datos de src a dest mientras se decrementa len
		while (len--)
			*dest_c++ = *src_c++;
	}
	/*si src esta por delante de test(existe superposicion), se ajustan los punteros dest y src para que aunten al final de las 
	areas de memoria a copiar. luego se copian los datos de atras hacia delante, lo quue evita sobreescribir llos datos antes copiados.
	*/
	else if (src_c < dest_c)
	{
		dest_c += len;
		src_c += len;
		while (len--)
			*(--dest_c) = *(--src_c);
	}
	return (dest);
}
