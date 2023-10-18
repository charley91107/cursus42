/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:28:21 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/19 18:42:51 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, the function `ft_isprint` takes an integer `b` as input. It checks 
if `b` is a printable character by comparing it with the ASCII values of the printable 
characters (32 to 126). If `b` is a printable character, the function returns 1. Otherwise, it returns 0.
*/

#include "libft.h"

int ft_isprint(int b)
{
    // Check if b is a printable character
    if (b >= 32 && b <= 126)
        return (1);
    else
        return (0);
}
