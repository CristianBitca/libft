/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:23:23 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/18 16:23:24 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	size;

	i = 0;
	if (!lst)
		return (0);
	size = ft(ft_lstsize(lst));
	while (i < size)
	{
		i++;
		lst = lst->next;
	}
	return (lst);
}


// t_list	*ft_lstlast(t_list *lst)
// {
// 	if(lst == NULL)
// 		return (NULL);
// 	while (lst->next != NULL)
// 		lst = lst->next;
// 	return (lst);
// }