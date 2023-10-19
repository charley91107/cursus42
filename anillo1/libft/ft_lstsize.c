/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:15:43 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 13:30:29 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, the `ft_lstsize` function takes a pointer to a linked list as input and returns the size 
of the list. The size of the list is determined by counting the number of nodes in the list. The function 
uses a while loop to iterate through the list until it reaches the end. The size of the list is stored in 
the variable `i`. Finally, the function returns the size of the list.
*/

#include "libft.h"

// Function to get list size
int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*cont;

	i = 0;
	cont = lst;
	while (cont)
	{
		cont = cont -> next;
		i++;
	}
	return (i);
}
