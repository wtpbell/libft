/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:57:50 by bewong            #+#    #+#             */
/*   Updated: 2024/10/09 19:57:50 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		skip;

	count = 0;
	skip = 1;
	while (*s)
	{
		if (*s != c && skip)
		{
			skip = 0;
			count++;
		}
		else
			skip = 1;
		s++;
	}
	return (count);
}

static void	free_words(char **words)
{
	char	**tmp;

	tmp = words;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(words);
}

static void	make_words(char **words, char const *s, char c, size_t len)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (*s && i < len)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		word_len = 0;
		while (s[word_len] && s[word_len] != c)
			word_len++;
		words[i] = ft_substr(s, 0, word_len);
		if (words[i] == NULL)
		{
			free_words(words);
			return ;
		}
		i++;
		s += word_len;
	}
	words[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**words;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	words = malloc(sizeof(char *) * (num_words + 1));
	if (!words)
		return (NULL);
	make_words(words, s, c, num_words);
	return (words);
}
