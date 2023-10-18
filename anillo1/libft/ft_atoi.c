/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:54 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/20 15:59:42 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*ft_atoi, convierte una cadena de caracteres que representa un número en su equivalente entero*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	/*
 	recorre la cadena str y omite los espacios en blanco
  	*/
	while ((*str >= '\t' && *str <= '\r') || (*str == ' '))
	{
		str++;
	}
	/*
 	mira el signo y si es negativo cambia sign a -1
  	*/
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	/*
 	Por cada dígito, multiplica el resultado existente por 10 y le suma el valor del dígito actual convertido 
  	a entero. Esto es lo que permite que la función construya el número entero a partir de los dígitos 
   	individuales.
  	*/
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
