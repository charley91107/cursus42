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
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	count_words(char const *s, char c)
{
	size_t	word;
	size_t	wordnumber;

	word = 0;
	wordnumber = 0;
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

void	ft_splitaux(char const *s, char c, char **mem)
{
	size_t	i[2];

	i[0] = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i[1] = 0;
			while (s[i[1]] && s[i[1]] != c)
				i[1]++;
			mem[i[0]] = (char *)malloc((i[1] + 1) * sizeof(char));
			if (mem[i[0]] == NULL)
			{
				while (i[0] > 0)
					free(mem[--i[0]]);
				free(*mem);
			}
			ft_strlcpy(mem[i[0]], s, i[1] + 1);
			s += i[1];
			i[0]++;
		}
	}
	mem[i[0]] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wordnumber;
  int i = 0;

	wordnumber = count_words(s, c);
	res = (char **)malloc((wordnumber + 1) * sizeof(char *));
  printf("puntero: %p\n", res);
	if (s == NULL || res == NULL)
		return (NULL);
	ft_splitaux(s, c, res);
	return (res);
}

/* void leaks()
{
  system("leaks -q a.out");
}
    atexit(leaks); */

/* int main() {
    char input[] = "Hola mundo este,es,un,ejemplo";
    char delimiter = ',';

    printf("%s\n", *ft_split("hello!", 32));
  
} */


/*int main()
{
  // test the function
  char s[] = "To be, or not to be, that is the question.";
  int count_strings = 0;
  char **split_strings = split(s, " ,.", &count_strings);
  
  // print out the substrings, which should be each word of the sentence above
  for (int i = 0; i < count_strings; i++)
    printf("%s\n", split_strings[i]);
  
  // free the dynamically allocated space for each string
  for (int i = 0; i < count_strings; i++)
    free(split_strings[i]);
  
  // free the dynamically allocated space for the array of pointers to strings
  free(split_strings);
  
  return 0;
} 
*/