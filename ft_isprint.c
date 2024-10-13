/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:32:52 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:32:52 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>

// int main()
// {
//     char c;

//     c = 'Q';
//     printf("Result when a printable character %c
//     is passed to isprint(): %d", c, isprint(c));
//     printf("\nResult when a printable character %c
//     is passed to isprint(): %d", c, ft_isprint(c));

//     c = '\n';
//     printf("\nResult when a control character %c
//     is passed to isprint(): %d", c, isprint(c));
//     printf("\nResult when a control character %c
//     is passed to isprint(): %d", c, ft_isprint(c));

//     return 0;
// }
