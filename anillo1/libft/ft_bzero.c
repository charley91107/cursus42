/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:47:19 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/13 21:18:54 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *g, size_t n2)
{
	char	*aux;
	
	//conversion del puntero g a un puntero de caracteres
	aux = (char *) g;
	//mientras n2 sea  mayor que 0  se establecen con el vaor 0 tantos bytes como n2 marque.
	while (n2 > 0)
	{
		*aux++ = 0;
		n2--;
	}
}
