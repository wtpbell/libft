/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:29:38 by bewong            #+#    #+#             */
/*   Updated: 2024/10/11 15:29:38 by bewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem -> content = content;
	elem -> next = NULL;
	return (elem);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	// Create a new list node
// 	t_list *node = ft_lstnew("Hello, World!");
// 	if (node)
// 	{
// 		// Access the content of the node
// 		printf("%s\n", (char *)node->content);
// 		printf("Next node: %p\n", node->next);
// 		// Free the allocated memory for the node
// 		free(node);
// 	}
// 	return 0;
// }
