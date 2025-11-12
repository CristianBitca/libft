/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:16:53 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/18 19:16:55 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Frees the memory of a single list node 'lst' using the function 'del' to free
// the content. The memory of the node itself is then freed.
//
// RETURN VALUE
//	The function does not return a value.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (lst->content && lst && del)
		del(lst->content);
	free(lst);
}
