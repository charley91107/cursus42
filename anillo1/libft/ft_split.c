/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:12:23 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/09/24 21:34:49 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//esta funcion se encarga de contar el numero de palabras en la cadena s utilizando el delimitador 'c'
size_t	count_words(char const *s, char c)
{
	size_t	word;
	size_t	wordnumber;

	word = 0;
	wordnumber = 0;
	/*
 	e bucle recorre la cadena s carácter por carácter. Si el carácter actual es igual 
  	al carácter delimitador c, se restablece word a 0, lo que indica que estamos fuera 
   	de una palabra. Si el carácter no es igual a c, se verifica si word es 0 (lo que 
    	significa que estamos al principio de una nueva palabra). Si es así, incrementamos 
     	wordnumber en 1 para contar una nueva palabra y luego establecemos word en 1 para indicar 
      	que estamos dentro de una palabra.
	*/
	while (*s)
	{
		if (*s == c)
			word = 0;
		else
		{
			if (!word)
			{
				wordnumber++;
				word = 1;
			}
		}
		s++;
	}
	return (wordnumber);
}

/*
es una función auxiliar utilizada por ft_split para dividir la cadena s en palabras y almacenarlas en el arreglo res. 
i[0] se utiliza para llevar el seguimiento de la posición actual en el arreglo res.
*/
void	ft_splitaux(char const *s, char c, char **res)
{
	size_t	i[2];

	i[0] = 0;
	/*
 	Este bucle recorre la cadena s y omite los caracteres delimitadores c. 
  	Cuando encuentra un carácter que no es c, inicializa i[1] a 0.
 	*/
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i[1] = 0;
			/*
   			Este bucle interno cuenta la longitud de la palabra actual, avanzando en s 
      			hasta encontrar un carácter delimitador c o el final de la cadena.
   			*/
			while (s[i[1]] && s[i[1]] != c)
				i[1]++;
			/*
   			Se asigna memoria dinámica para almacenar la palabra actual en res[i[0]]
      			*/
			res[i[0]] = (char *)malloc((i[1] + 1) * sizeof(char));
			/*
			Se verifica si la asignación de memoria fue exitosa. Si no lo fue, 
			se libera la memoria previamente asignada y se devuelve NULL.
			*/
			if (res[i[0]] == NULL)
			{
				while (i[0] > 0)
					free(res[i[0]--]);
				free(res);
			}
			/*
   			La función ft_strlcpy se utiliza para copiar la palabra actual desde s a res[i[0]]. 
      			Luego, se actualizan las variables s, i[0], y el bucle continúa para procesar la 
	 		siguiente palabra.
      			*/
			ft_strlcpy(res[i[0]], s, i[1] + 1);
			s += i[1];
			i[0]++;
		}
	}
	/*
	Finalmente, se agrega un puntero NULL al final del arreglo res para indicar el final de las palabras.	
	*/
	res[i[0]] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wordnumber;
	/*
 	La función llama a la función count_words para contar el número de palabras en la cadena s 
  	utilizando el carácter delimitador c. El resultado se almacena en wordnumber.
 	*/
	wordnumber = count_words(s, c);
	/*
	Luego, se reserva memoria dinámica para el arreglo res. Se utiliza wordnumber + 1 
	*/
	res = (char **)malloc((wordnumber + 1) * sizeof(char *));
	if (s == NULL || res == NULL)
		return (NULL);
	/*
	la función llama a ft_splitaux con los argumentos s, c y res para dividir la cadena s 
 	en palabras y almacenarlas en el arreglo res.
	*/
	ft_splitaux(s, c, res);
	return (res);
}
