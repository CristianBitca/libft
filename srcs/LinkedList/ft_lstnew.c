/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:14:52 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/18 14:14:54 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_lstnew
// ----------------------------
// Allocates and returns a new node of a linked list. The node’s content is set
// to 'content', and its 'next' pointer is initialized to NULL.
//
// RETURN VALUE
//	A pointer to the newly created node, or NULL if memory allocation fails.
t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = ft_calloc(sizeof(t_list), 1);
	if (!l)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}

/*int main(void)
{
	t_list *l;

	l = ft_lstnew("test");
	printf("%s", (char *)l->content);
	free (l);
	return (0);
}*/