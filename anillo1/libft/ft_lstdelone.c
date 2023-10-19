/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:55:27 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 17:06:55 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, we define a function `ft_lstdelone` that takes a pointer to a list node and a pointer 
to a function as arguments. The function deletes the content of the list node using the provided function, 
frees the memory allocated for the list node, and sets the list pointer to NULL.
*/

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    // Delete content using provided function
    del(lst->content);

    // Free memory allocated for list node
    free(lst);

    // Set list pointer to NULL
    lst = NULL;
}
