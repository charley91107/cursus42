/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:55:11 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 17:09:33 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, we define a function `ft_lstadd_back` that takes a pointer to a pointer to a linked list (`t_list **lst`) 
and a pointer to a new node (`t_list *new`). The function adds the new node to the end of the list.
First, we check if the list exists by checking if `lst` is not NULL. If the list is empty, we add the new node 
to the list. Otherwise, we get the last node in the list using the `ft_lstlast` function and add the new node to 
the end of the list.
The `ft_lstlast` function is not provided in this code snippet, but it should return a pointer to the 
last node in the list.
*/

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    // Check if list exists
    if (lst)
    {
        // If list is empty, add new node
        if (*lst == NULL)
            *lst = new;
        else
        {
            // Get last node in list
            temp = ft_lstlast(*(lst));
            // Add new node to end of list
            temp -> next = new;
        }
    }
}
