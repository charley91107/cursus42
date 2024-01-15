/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:07:17 by cmunoz-c          #+#    #+#             */
/*   Updated: 2024/01/14 16:13:57 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 0)
		n = 4294967295 + n + 1;
	if (n > 9)
	{
		len += ft_unsigned(n / 10);
		if (len == -1)
			return (-1);
	}
	len += ft_putchar((n % 10) + '0');
	if (len == -1)
		return (-1);
	return (len);
}
