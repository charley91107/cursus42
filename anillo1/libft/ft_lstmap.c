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
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*content;
	t_list	*begin;
	t_list	*newlist;

	if (!f || !del)
		return (NULL);
	begin = 0;
	while (lst)
	{
		content = (*f)(lst -> content);
		newlist = ft_lstnew(content);
		if (!newlist)
		{
			(*del)(content);
			ft_lstclear(&begin, (del));
			return (0);
		}
		ft_lstadd_back(&begin, newlist);
		lst = lst -> next;
	}
	return (begin);
}
