/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:46:42 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/12 13:15:25 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, we have a function `ft_lstadd_front` that takes a pointer to a pointer of a linked list 
(`t_list **lst`) and a pointer to a new node (`t_list *new`). The function checks if the list 
and new node are valid. If they are, it sets the new node's next pointer to the current list head 
and updates the list head to the new node. This effectively adds the new node to the front of the list.
*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    // Check if list and new node are valid
    if (lst && new)
    {
        // Set new node's next pointer to current list head
        new -> next = *lst;

        // Update list head to new node
        *lst = new;
    }
