/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:44:14 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/14 13:32:52 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In this code, the function `ft_isalpha` takes an integer `str` as input. It checks if the input `str` 
is an alphabet character (either lowercase or uppercase). If it is, the function returns 1. 
Otherwise, it returns 0.
*/
#include "libft.h"

int ft_isalpha(int str)
{
    // Check if str is an alphabet character
    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
        return (1);
    else
        return (0);
}
