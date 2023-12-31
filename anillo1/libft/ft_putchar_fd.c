/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:46:35 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/30 17:21:30 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	/*
 	se pasa fd como el file descriptor, &c como un puntero al carácter c, y 1 como el número de bytes que se van a escribir 
  	*/
	write(fd, &c, 1);
}	
