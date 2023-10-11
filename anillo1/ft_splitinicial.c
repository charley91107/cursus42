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

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i[2];
	int		word;
	char	**strs;

	i[0] = 0;
	i[1] = -1;
	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!(strs))
		return (NULL);
	while (++i[1] < word)
	{
		while (s[i[0]] == c)
			i[0]++;
		strs[i[1]] = ft_substr(s, i[0], ft_size_word(s, c, i[0]));
		if (!(strs[i[1]]))
		{
			ft_free(strs, i[1]);
			return (NULL);
		}
		i[0] += ft_size_word(s, c, i[0]);
	}
	strs[i[1]] = 0;
	return (strs);
}
