/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:38:42 by cmunoz-c          #+#    #+#             */
/*   Updated: 2024/01/15 11:40:19 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_hexa(unsigned long nbr, char *base);
int		ft_ptr(void *ptr);
int		ft_putnbr(int n);
int		ft_unsigned(unsigned int n);

#endif