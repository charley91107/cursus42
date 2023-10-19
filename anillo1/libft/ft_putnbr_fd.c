/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:07:15 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/01 17:19:25 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	// Verifica si el número es el límite inferior de los enteros de 32 bits (-2147483648)
	if (n == -2147483648)
	{
		// Imprime el signo negativo y el dígito '2' para manejar el límite inferior
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		// Cambia el valor de n para evitar desbordamiento al convertir a positivo
		n = 147483648;
	}

	// Maneja números negativos
	if (n < 0)
	{
		// Imprime el signo negativo y convierte n a positivo para procesarlo
		ft_putchar_fd('-', fd);
		n *= -1;
	}

	// Caso base: si el número es un solo dígito, imprímelo y devuelve
	if (n < 10)
	{
		// Imprime el dígito y devuelve la función
		ft_putchar_fd((n + 48), fd); // 48 es el valor ASCII de '0'
		return ;
	}
	else
	{
		// Si el número tiene más de un dígito, imprime recursivamente los dígitos
		ft_putnbr_fd(n / 10, fd); // Imprime el cociente dividiendo n por 10
		ft_putnbr_fd(n % 10, fd); // Imprime el residuo (último dígito)
	}
}

