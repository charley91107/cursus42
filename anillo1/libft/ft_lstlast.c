/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:30:52 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 17:13:16 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This code defines a function `ft_lstlast` that takes a pointer to a linked list as input and returns a 
pointer to the last element of the list. The function uses a temporary pointer `tmp` to traverse the list. 
If the list is not empty, the function enters a loop that continues until the end of the list. 
Inside the loop, the temporary pointer is moved to the next element in the list. Finally, 
the function returns the last element of the list, which is te element pointed to by the temporary pointer 
at the end of the loop.*/                        
#include "libft.h"

// Function to get the last element of a linked list
t_list *ft_lstlast(t_list *lst)
{
	t_list *tmp; // Initialize a temporary pointer

	tmp = lst; // Set the temporary pointer to the start of the list
	if (lst) // Check if the list is not empty
	{
		while (tmp -> next) // Loop until the end of the list
			tmp = tmp -> next; // Move the temporary pointer to the next element
	}
	return (tmp); // Return the last element of the list
}

