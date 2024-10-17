/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:33:20 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:33:20 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	bytes_to_copy;
	size_t	copy_len;

	if (!dest && size == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dest_len >= size)
		return (size + src_len);
	bytes_to_copy = size - dest_len - 1;
	if (bytes_to_copy > 0)
	{
		copy_len = 0;
		if (src_len < bytes_to_copy)
			copy_len = src_len;
		else
			copy_len = bytes_to_copy;
		ft_memcpy(dest + dest_len, src, copy_len);
		dest[dest_len + copy_len] = '\0';
	}
	return (dest_len + src_len);
}
