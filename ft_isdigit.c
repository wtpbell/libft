/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:32:49 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:32:49 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	char c;
// 	c='5';
// 	printf("Result when numeric character is passed: %d", isdigit(c));
// 	printf("\nResult when numeric character is passed: %d", ft_isdigit(c));

// 	c='+';
// 	printf("\nResult when non-numeric character is passed: %d", isdigit(c));
// 	printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

// 	return 0;
// }
