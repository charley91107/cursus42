/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:46:42 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/12 15:58:20 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
n this code, the function `ft_isdigit` takes an integer `d` as input. It checks if the value of `d` 
falls within the range of ASCII values for the digits 0-9. If it does, the function returns 1, 
indicating that `d` is a digit. Otherwise, it returns 0, indicating that `d` is not a digit.
*/

#include "libft.h"

int ft_isdigit(int d)
{
    // Check if 'd' is a digit (0-9)
    if (d >= '0' && d <= '9')
        return (1); // It's a digit
    else
        return (0); // It's not a digit
}


