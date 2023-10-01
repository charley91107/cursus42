/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:52:07 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/01 17:00:45 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	/*
 	Utiliza la función write para escribir un solo carácter de la cadena (*s) en el descriptor de archivo (fd). 
  	El tercer argumento 1 indica que se está escribiendo un solo carácter.
  	*/
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	/*
 	Escribe el carácter de nueva línea ('\n') en el descriptor de archivo fd.
  	*/
	write(fd, "\n", 1);
}
