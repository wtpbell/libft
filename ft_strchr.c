/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:33:18 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:33:18 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	i = 0;
	cc = (char)c;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((char *)s + i);
		i++;
	}
	if (cc == '\0')
		return ((char *)s + i);
	return (NULL);
}
// int	main(void)
// {
// 	char    *str = "Hello, World!";
//     char    *result;

//     result = ft_strchr(str, 'W');
//     printf("ft_strchr: %s\n", result);
//     result = strchr(str, 'W');
//     printf("strchr: %s\n", result);

//     return (0);
// }
