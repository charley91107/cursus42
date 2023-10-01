/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:37:31 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/01 16:18:33 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	/*
 	Dentro del bucle, la función write se utiliza para escribir un byte (1 byte) del contenido apuntado 
  	por s en el descriptor de archivo fd.
 	*/
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
