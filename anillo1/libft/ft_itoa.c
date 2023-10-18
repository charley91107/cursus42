/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:25:08 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/27 17:28:08 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Function to find the length of a number
size_t ft_len(long a)
{
	size_t len; // Initialize variable to store length

	len = 0; // Set initial length to 0
	if (a < 0) // Check if number is negative
	{
		a = -a; // Convert negative number to positive
		len++; // Increment length by 1 for negative sign
	}
	while (a > 0) // Loop until number becomes 0
	{
		a = a / 10; // Divide number by 10 to remove last digit
		len++; // Increment length by 1 for each digit removed
	}
	return (len); // Return the length of the number
}

// Function to create a tab with '0'
char	*ft_tab0(char *tab)
{
	// Allocate memory for the tab
	tab = (char *)malloc(sizeof(char) * 2);
	if (!(tab))
		return (NULL);
	// Assign '0' to the first character
	tab[0] = '0';
	// Assign null terminator to the second character
	tab[1] = '\0';
	// Return the tab
	return (tab);
}

/*
This code converts an integer to a string. It first checks if the integer is 0, and if so, 
returns the string "0". If the integer is not 0, it calculates the length of the string and allocates memory for it.
It then converts the integer to a string and returns the string. 
*/

char	*ft_itoa(int n)
{
	long	a;
	char	*tab;
	size_t	len;

	// Convert int to long
	a = n;

	// Calculate length of the string
	len = ft_len(a);

	// Initialize tab to NULL
	tab = 0;

	// Check if n is 0, return "0" if true
	if (a == 0)
		return (ft_tab0(tab));

	// Allocate memory for tab
	tab = (char *)malloc(sizeof(char) * (len + 1));

	// Check if allocation was successful
	if (!(tab))
		return (NULL);

	// Set last character of tab to NULL
	tab[len--] = '\0';

	// Check if n is negative, add '-' to tab if true
	if (a < 0)
	{
		tab[0] = '-';
		a = -a;
	}

	// Convert long to string
	while (a > 0)
	{
		tab[len] = a % 10 + '0';
		a = a / 10;
		len--;
	}

	// Return the string
	return (tab);
}
