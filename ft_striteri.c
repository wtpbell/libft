/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:57:54 by bewong            #+#    #+#             */
/*   Updated: 2024/10/09 19:57:54 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_uppercase(unsigned int index, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z') {
// 		*c -= 32;
// 	}
// }

// int main()
// {
// 	char str[] = "hello world";
// 	ft_striteri(str, to_uppercase);
// 	printf("%s\n", str); 
// 	return (0);
// }
