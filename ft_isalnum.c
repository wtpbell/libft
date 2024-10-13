/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:32:20 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:32:20 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}

// int main(void) 
// {
//     int result;
//     int result_ft;
//     int c;

//     // Test cases for digits
//     c = '5';
//     result = isalnum(c);
//     result_ft = ft_isalnum(c);
//     printf("When %c is passed, return value is 
//     %d (expected 1)\n", c, result);
//     printf("When %c is passed, return value is 
//     %d (expected 1)\n", c, result_ft);

//     // Test cases for uppercase letters
//     c = 'Q';
//     result = isalnum(c);
//     result_ft = ft_isalnum(c);
//     printf("When %c is passed, return value is 
//     %d (expected 1)\n", c, result);
//     printf("When %c is passed, return value is 
//     %d (expected 1)\n", c, result_ft);

//     // Test cases for lowercase letters
//     c = 'l';
//     result = isalnum(c);
//     result_ft = ft_isalnum(c);
//     printf("When %c is passed, return value is 
//     %d (expected 1)\n", c, result);
//     printf("When %c is passed, return value is 
//     %d (expected 1)\n", c, result_ft);

//     // Test cases for non-alphanumeric characters
//     c = '+';
//     result = isalnum(c);
//     result_ft = ft_isalnum(c);
//     printf("When %c is passed, return value is 
//     %d (expected 0)\n", c, result);
//     printf("When %c is passed, return value is 
//     %d (expected 0)\n", c, result_ft);

//     return 0;
// }
