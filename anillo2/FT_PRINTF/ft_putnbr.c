/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:38:19 by cmunoz-c          #+#    #+#             */
/*   Updated: 2024/01/15 11:25:41 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			len += ft_putchar('-');
			if (len == -1)
				return (-1);
			n = -n;
		}
		if (n > 9)
		{
			len += ft_putnbr(n / 10);
			if (len == -1)
				return (-1);
		}
	}
	len += ft_putchar((n % 10) + '0');
	if (len == -1)
		return (-1);
	return (len);
}
