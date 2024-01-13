/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:12:43 by cmunoz-c          #+#    #+#             */
/*   Updated: 2024/01/13 16:27:18 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_converts(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
    else if (format == 's')
        return (ft_putstr(va_arg(args, char *)));
}
