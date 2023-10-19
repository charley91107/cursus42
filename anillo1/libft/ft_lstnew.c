/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:35:53 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 12:00:29 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, we create a new list node with the given content. We allocate memory for the node and set 
its content and next pointer. If memory allocation fails, we return NULL.
*/

#include "libft.h"

// Create new list node
t_list *ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof (t_list));
	if (!ptr)
		return (0);
	ptr -> content = content;
	ptr -> next = 0;
	return (ptr);
}
