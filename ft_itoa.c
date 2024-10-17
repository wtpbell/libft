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
	size_t	len;

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
	size_t	len;
	long	nbr;
	char	*c;

	nbr = n;
	len = ft_len(nbr);
	c = ft_calloc(len + 1, sizeof(char));
	if (!c)
		return (0);
	if (nbr == 0)
	{
		c[0] = '0';
		return (c);
	}
	while (len > 0)
	{
		c[--len] = '0' + ft_abs(nbr % 10);
		nbr /= 10;
	}
	if (n < 0)
		c[0] = '-';
	return (c);
}
