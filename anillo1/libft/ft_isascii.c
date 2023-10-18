/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:59:12 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/14 13:03:31 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, the function `ft_isascii` checks if the given integer `a` is within the range of ASCII 
values (0-127). If it is, the function returns 1, indicating that `a` is an ASCII character. Otherwise, 
it returns 0.
*/

#include "libft.h"

int ft_isascii(int a)
{
    // Check if a is within ASCII range
    if (a >= 0 && a <= 127)
        return (1);
    else
        return (0);
}
