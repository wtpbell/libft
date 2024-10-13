/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:33:23 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:33:23 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(dest, src, src_len + 1);
	else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = 0;
	}
	return (src_len);
}
// int	main(void)
// {
// 	size_t	size = 10;
// 	char	dest[size];
// 	char	*src = "Hello, World!";
// 	size_t    len = ft_strlcpy(dest, src, size);
// 	prin
// tf("Copied string: %s\n", dest);
// 	printf("Copied len: %zu\n", len);
// }
