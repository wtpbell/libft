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

static int	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_free_array(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**ft_fill_array(char **aux, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (j < i)
		{
			aux[k] = ft_substr(s, j, i - j);
			if (!aux[k])
				return (ft_free_array(aux), NULL);
			k++;
		}
	}
	aux[k] = NULL;
	return (aux);
}

char	**ft_split(char const *s, char c)
{
	char		**aux;
	size_t		nwords;

	if (!s)
		return (NULL);
	nwords = ft_count_words(s, c);
	aux = ft_calloc((nwords + 1), sizeof(char *));
	if (!aux)
		return (NULL);
	return (ft_fill_array(aux, s, c));
}
