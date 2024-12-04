/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_new_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:07:04 by bewong            #+#    #+#             */
/*   Updated: 2024/10/23 10:07:04 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}

static char	*ft_read(int fd, char **stach)
{
	char		*line;
	ssize_t		len;

	line = malloc(1 + BUFFER_SIZE);
	if (!line)
		return (ft_free(stach), NULL);
	while (!ft_strchr(*stach, '\n'))
	{
		len = read(fd, line, BUFFER_SIZE);
		if (len == -1)
			return (free(line), ft_free(stach), NULL);
		line[len] = '\0';
		if (len == 0)
			break ;
		*stach = ft_strjoin(*stach, line);
		if (!*stach)
			return (free(line), NULL);
	}
	free(line);
	return (*stach);
}

static char	*ft_get_line(char *stach)
{
	char		*line;
	size_t		eol_pos;

	eol_pos = 0;
	if (!stach || !stach[0])
		return (NULL);
	while (stach[eol_pos] && stach[eol_pos] != '\n')
		eol_pos++;
	if (stach[eol_pos] && stach[eol_pos] == '\n')
		eol_pos++;
	line = malloc(eol_pos + 1);
	if (!line)
		return (NULL);
	ft_memcpy(line, stach, eol_pos);
	line[eol_pos] = '\0';
	return (line);
}

static char	*ft_get_rest(char **stach)
{
	char	*rest;
	size_t	eol_pos;

	eol_pos = 0;
	while ((*stach)[eol_pos] && (*stach)[eol_pos] != '\n')
		eol_pos++;
	if (!(*stach)[eol_pos])
		return (ft_free(stach), NULL);
	rest = ft_strdup(*stach + eol_pos + 1);
	if (!rest)
		return (ft_free(stach), NULL);
	ft_free(stach);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*stach;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stach)
		stach = ft_strdup("");
	stach = ft_read(fd, &stach);
	if (!stach)
		return (NULL);
	line = ft_get_line(stach);
	if (!line)
		return (ft_free(&stach), NULL);
	stach = ft_get_rest(&stach);
	return (line);
}
