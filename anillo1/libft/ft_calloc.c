/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:54:49 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/20 20:31:56 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
we define a function `ft_calloc` that takes two parameters, `count` and `size`. 
The function allocates memory for an array of `count` elements, each of `size` bytes, 
and initializes the memory to zero. The function returns a pointer to the allocated memory. 
If the memory allocation fails, the function returns a null pointer.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	// Allocate memory
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);

	// Initialize memory to zero
	ft_bzero(ptr, count * size);

	// Return allocated memory
	return (ptr);
}
