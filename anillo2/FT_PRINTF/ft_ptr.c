/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:50:16 by cmunoz-c          #+#    #+#             */
/*   Updated: 2024/01/14 16:49:11 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *ptr)
{
	int	len;
	int	aux;

	len = 0;
	aux = 0;
	if (ft_putstr("0x") == -1)
		return (-1);
	len += 2;
	aux = ft_hexa((unsigned long)ptr, "0123456789abcdef");
	if (aux == -1)
		return (-1);
	len += aux;
	return (len);
}
