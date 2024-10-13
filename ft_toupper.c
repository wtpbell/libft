/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:34:42 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:34:42 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
// #include <stdio.h>
// int main(void)
// {
//     char c = 'a';
//     printf("Lowercase character: %c\n", c);
//     c = ft_toupper(c);
//     printf("Uppercase character: %c\n", c);
//     return (0);
// }
