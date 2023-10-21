/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:12:23 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/10/08 14:56:21 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
Este código es una implementación de la función ft_split que divide una cadena 
(s) en palabras usando un delimitador dado (c). La función ft_split devuelve un 
array de cadenas (un array de punteros a caracteres) donde cada cadena representa 
una palabra en la cadena original.
*/

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i]) // Itera a través de la cadena de entrada mientras no haya llegado al final.
	{
		if (s[i] != c) // Si el carácter actual no es el delimitador, incrementa el contador de palabras.
		{
			word++;
			while (s[i] != c && s[i]) // Avanza hasta encontrar el próximo delimitador o el final de la cadena.
				i++;
		}
		else
			i++; // Si el carácter actual es el delimitador, simplemente avanza al próximo carácter.
	}
	return (word); // Devuelve el número total de palabras encontradas en la cadena.
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i]) // Cuenta la longitud de la palabra actual hasta encontrar el delimitador o el final de la cadena.
	{
		size++;
		i++;
	}
	return (size); // Devuelve el tamaño de la palabra.
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0) // Libera cada cadena en el array de cadenas.
		free(strs[j]);
	free(strs); // Libera el array de punteros a cadenas.
}

char	**ft_split(char const *s, char c)
{
	int		i[2];
	int		word;
	char	**strs;

	i[0] = 0;
	i[1] = -1;
	word = ft_count_word(s, c); // Obtiene el número total de palabras en la cadena.
	strs = (char **)malloc((word + 1) * sizeof(char *)); // Aloca memoria para el array de punteros a cadenas.
	if (!(strs)) // Si la asignación de memoria falla, devuelve NULL.
		return (NULL);
	while (++i[1] < word) // Itera a través del array de punteros a cadenas para llenarlo con las palabras.
	{
		while (s[i[0]] == c) // Avanza hasta encontrar el primer carácter que no sea un delimitador.
			i[0]++;
		strs[i[1]] = ft_substr(s, i[0], ft_size_word(s, c, i[0])); // Crea una subcadena con la palabra actual y guárdala en el array.
		if (!(strs[i[1]])) // Si la asignación de memoria falla, libera las cadenas anteriores y devuelve NULL.
		{
			ft_free(strs, i[1]);
			return (NULL);
		}
		i[0] += ft_size_word(s, c, i[0]); // Avanza el índice para el próximo ciclo del bucle.
	}
	strs[i[1]] = 0; // Establece el último puntero en el array como NULL para indicar el final del array de cadenas.
	return (strs); // Devuelve el array de punteros a cadenas que contiene las palabras divididas.
}

