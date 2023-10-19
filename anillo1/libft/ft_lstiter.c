/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:48:17 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 18:05:59 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This code defines a function `ft_lstiter` that takes a linked list and a function 
pointer as arguments. It iterates over each node in the list and applies the function to the content 
of each node. The function pointer should point to a function that takes a void pointer as an argument 
and returns void.
*/

#include "libft.h"

// Function to iterate over a linked list
void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	// Initialize temporary pointer to the head of the list
	tmp = lst;

	// Check if the list and function pointer are valid
	if (lst && f)
	{
		// Iterate over the list
		while (tmp)
		{
			// Apply the function to the current node's content
			(*f)(tmp -> content);

			// Move to the next node
			tmp = tmp -> next;
		}
	}
}
