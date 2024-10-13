/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:32:28 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:32:28 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//     printf("ft_isascii: %d\n", ft_isascii(0)); // 1
//     printf("%d\n", isascii(0)); // 1
//     printf("ft_isascii: %d\n", ft_isascii(127)); // 1
//     printf("%d\n", isascii(127)); // 1
//     printf("ft_isascii: %d\n", ft_isascii(128)); // 0
//     printf("%d\n", isascii(128)); // 0
//     return (0);
// }
