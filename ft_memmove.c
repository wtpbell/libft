/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:33:10 by bewong            #+#    #+#             */
/*   Updated: 2024/10/07 19:33:10 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		tmp_dst = (unsigned char *)dest;
		tmp_src = (unsigned char *)src;
		while (n--)
			*(tmp_dst++) = *(tmp_src++);
	}
	else
	{
		tmp_dst = (unsigned char *)dest + n - 1;
		tmp_src = (unsigned char *)src + n - 1;
		while (n--)
			*(tmp_dst--) = *(tmp_src--);
	}
	return (dest);
}
// #define SIZE    21
// char target[SIZE] = "a shiny white sphere";
// char target2[SIZE] = "a shiny white sphere";
// int main( void )
// {
// 	char * p = target + 3;
// 	/* p points at the starting character of the word we want to replace */
// 	char * source = target + 8; /* start of "shiny" */
// 	printf( "Before memmove, target is \"%s\"\n", target );
// 	memmove( p, source, 5 );
// 	printf( "After memmove, target becomes \"%s\"\n", target );
// 	char * p2 = target2 + 3;
// 	/* p points at the starting character of the word we want to replace */
// 	char * source2 = target2 + 8; /* start of "shiny" */
// 	printf( "\nBefore ft_memmove, target is \"%s\"\n", target2 );
// 	ft_memmove( p2, source2, 5 );
// 	printf( "After ft_memmove, target becomes \"%s\"\n", target2 );
// }
