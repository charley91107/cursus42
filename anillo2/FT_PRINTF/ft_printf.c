/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:12:43 by cmunoz-c          #+#    #+#             */
/*   Updated: 2024/01/15 11:36:15 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_ptr(va_arg(args, void *)));
	else if (format == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_unsigned(va_arg(args, int)));
	else if (format == 'x')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_type(format[i + 1], args);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (len);
}

/*int	main(void)
{
	char	*str = "Hola, Mundo!";
	char	*ptr = &str[5];
	int		i = 42;
	int		n = -42;
	unsigned int u = 42;
	unsigned int u2 = -42;

	printf("Pruebas con printf:\n");
	printf("imprimie el caracter: %c\n", 'A');
	printf(" imprime el string: %s\n", str);
	printf("imprime el puntero en hexagonal: %p\n", ptr);
	printf("imprime numero en base 10: %d\n", i);
	printf("imprime un entero en base 10: %i\n", i);
	printf("imprime el numero decimal sin signo: %u\n", u);
	printf("imprime el numero decimal sin signo(neg): %u\n", u2);
	printf("imprime un numero hexadecimal en minusculas: %x\n", u);
	printf("imprime un numero hexadecimal en mayusculas: %X\n", u);
	printf("imprime el simbolo del porcentaje: %%\n");
	printf("imprime situacion especial de string null: %s\n", NULL);
	printf("imprime numero en base 10 negativo: %d\n", n);
	printf("\n");

	printf("Pruebas con ft_printf:\n");
	ft_printf("Pruebas con printf:\n");
	ft_printf("imprimie el caracter: %c\n", 'A');
	ft_printf(" imprime el string: %s\n", str);
	ft_printf("imprime el puntero en hexagonal: %p\n", ptr);
	ft_printf("imprime numero en base 10: %d\n", i);
	ft_printf("imprime un entero en base 10: %i\n", i);
	ft_printf("imprime el numero decimal sin signo: %u\n", u);
	ft_printf("imprime el numero decimal sin signo(neg): %u\n", u2);
	ft_printf("imprime un numero hexadecimal en minusculas: %x\n", u);
	ft_printf("imprime un numero hexadecimal en mayusculas: %X\n", u);
	ft_printf("imprime el simbolo del porcentaje: %%\n");
	ft_printf("imprime situacion especial de string null: %s\n", NULL);
	ft_printf("imprime numero en base 10 negativo: %d\n", n);
	printf("\n");

	return (0);
}*/