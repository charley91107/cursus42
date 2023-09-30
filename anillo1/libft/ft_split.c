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

void	ft_splitaux(char const *s, char c, char **res)
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
			res[i[0]] = (char *)malloc((i[1] + 1) * sizeof(char));
			if (res[i[0]] == NULL)
			{
				while (i[0] > 0)
					free(res[i[0]--]);
				free(res);
			}
			ft_strlcpy(res[i[0]], s, i[1] + 1);
			s += i[1];
			i[0]++;
		}
	}
	res[i[0]] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wordnumber;

	wordnumber = count_words(s, c);
	res = (char **)malloc((wordnumber + 1) * sizeof(char *));
	if (s == NULL || res == NULL)
		return (NULL);
	ft_splitaux(s, c, res);
	return (res);
}
