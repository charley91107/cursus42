/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:52:20 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/13 20:09:22 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This code defines a function `ft_lstmap` that takes a linked list, a function pointer `f`, 
and a function pointer `del`. It applies the function `f` to each node's content in the original list 
and creates a new list with the modified contents. If the function `f` fails to apply to a node's content, 
the function deletes the modified content and clears the new list. Finally, the function returns the new list.
*/

#include "libft.h"

// Function to map a list using a function
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    // Pointer to traverse the list
    t_list *content;

    // Pointer to the beginning of the new list
    t_list *begin;

    // Pointer to the new list node
    t_list *newlist;

    // Check if function pointers are valid
    if (!f || !del)
        return (NULL);

    // Initialize the new list
    begin = 0;

    // Traverse the original list
    while (lst)
    {
        // Apply the function to the current node's content
        content = (*f)(lst -> content);

        // Create a new list node with the modified content
        newlist = ft_lstnew(content);

        // Check if the new list node was created successfully
        if (!newlist)
        {
            // If not, delete the modified content and clear the new list
            (*del)(content);
            ft_lstclear(&begin, (del));
            return (0);
        }

        // Add the new list node to the end of the new list
        ft_lstadd_back(&begin, newlist);

        // Move to the next node in the original list
        lst = lst -> next;
    }

    // Return the new list
    return (begin);
}
