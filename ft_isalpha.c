/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:32:26 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:32:26 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c;
//     c = 'Q';
//     printf("\nResult when uppercase alphabet is 
//     passed: %d", isalpha(c));
//     printf("\nResult when uppercase alphabet is 
//     passed: %d", ft_isalpha(c));
//     c = 'q';
//     printf("\nResult when lowercase alphabet is 
//     passed: %d", isalpha(c));
//     printf("\nResult when lowercase alphabet is 
//     passed: %d", ft_isalpha(c));
//     c='+';
//     printf("\nResult when non-alphabetic character 
//     is passed: %d", isalpha(c));
//     printf("\nResult when non-alphabetic character 
//     is passed: %d", ft_isalpha(c));
//     return 0;
// }
