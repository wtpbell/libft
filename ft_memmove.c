/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:33:10 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:33:10 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		tmp_dst = (unsigned char *)dest;
		tmp_src = (unsigned char *)src;
		while (n--)
			*(tmp_dst++) = *(tmp_src++);
	}
	else
	{
		tmp_dst = (unsigned char *)dest + n - 1;
		tmp_src = (unsigned char *)src + n - 1;
		while (n--)
			*(tmp_dst--) = *(tmp_src--);
	}
	return (dest);
}

