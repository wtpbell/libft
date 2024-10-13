/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:34:31 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:34:31 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == needle[j] && hay[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) hay + i);
		}
		i++;
	}
	return (0);
}

// int main() {
//     const char *hay = "Hello, World!";
//     const char *needle = "World";
//     size_t len = 13; // Searching within the entire string

//     char *result = ft_strnstr(hay, needle, len);
//     if (result) {
//         printf("Found substring: %s\n", result);
//     } else {
//         printf("Substring not found.\n");
//     }

//     return 0;
// }
