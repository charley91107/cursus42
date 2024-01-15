/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:02:53 by cmunoz-c          #+#    #+#             */
/*   Updated: 2024/01/14 14:23:29 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long nbr, char *base)
{
	int		nbr_base[16];
	int		result;
	int		i;

	i = 0;
	result = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	while (nbr)
	{
		nbr_base[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		result += ft_putchar(base[nbr_base[i]]);
		i--;
	}
	return (result);
}
