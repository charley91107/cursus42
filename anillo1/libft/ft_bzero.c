/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:47:19 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/13 21:18:54 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, we have a function `ft_bzero` that takes a pointer `g` and a size `n2` as arguments. 
The function initializes an auxiliary pointer `aux` to point to the same memory location as `g`. 
Then, it enters a loop that iterates through each byte in the memory block. In each iteration, the function 
sets the current byte to 0 and decrements the remaining bytes count. 
The loop continues until all bytes in the memory block have been set to 0.
*/

#include "libft.h"

void ft_bzero(void *g, size_t n2)
{
    char *aux;

    // Initialize auxiliary pointer
    aux = (char *) g;

    // Iterate through memory block
    while (n2 > 0)
    {
        // Set current byte to 0
        *aux++ = 0;

        // Decrement remaining bytes count
        n2--;
    }
}

