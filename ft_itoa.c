/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:57:34 by bewong            #+#    #+#             */
/*   Updated: 2024/10/09 19:57:34 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long	ft_abs(long nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;
	long	nbr;

	nbr = n;
	sign = 1;
	if (n < 0)
		sign = -1;
	len = ft_len(nbr);
	c = (char *)malloc(sizeof(char) * (len + 1));
	if (!c)
		return (0);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(nbr % 10);
		nbr /= 10;
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
// int	main()
// {
// 	int test_cases[] = {
// 	0,
// 	05,
// 	-3,
// 	-123,
// 	12345,
// 	-6789,
// 	-2147483648,
// 	2147483647,
// 	-1,
// 	-123456789,
// 	987654321
// 	};

// 	const char*	expected_outputs[] = {
// 	"0",
// 	"5",
// 	"-3",
// 		"-123",
// 	"12345",
// 	"-6789",
// 	"-2147483648",
// 	"2147483647",
// 	"-1",
// 	"-123456789",
// 	"987654321"
// 	};

// 	size_t num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
// 	for (size_t i = 0; i < num_cases; i++) {
// 	char *result = ft_itoa(test_cases[i]);
// 	if (result) {
// 		printf("Input: %d, Output: %s, Expected: %s\n",
// 			test_cases[i], result, expected_outputs[i]);
// 		free(result);
// 	} else {
// 		printf("Input: %d, Output: NULL (Memory allocation failed)\n",
// 			test_cases[i]);
// 	}
// 	}

// 	return 0;
// }
