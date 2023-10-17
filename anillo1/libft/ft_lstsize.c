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
#include "libft.h"

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