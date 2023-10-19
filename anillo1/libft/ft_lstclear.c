/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:24:42 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 17:48:00 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This code defines a function `ft_lstclear` that takes a pointer to a linked list and a pointer to a 
function as arguments. It iterates through the list, deleting each node using the provided function. 
Finally, it sets the list pointer to `NULL` to indicate that the list is empty.
*/

#include "libft.h"

// Function to clear a linked list
void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	// Check if the list exists
	if (lst)
	{
		// Iterate through the list
		while (*lst)
		{
			// Store the next node in a temporary variable
			tmp = (*lst)->next;

			// Delete the current node using the provided function
			ft_lstdelone(*lst, del);

			// Update the list pointer to the next node
			(*lst) = tmp;
		}
	}
}
