/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:13:32 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/18 20:13:33 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, temp);
		lst = lst->next;
	}
	return (res);
}

void	*multiple(void *content)
{
	int *res;
	int *val;

	*val = *(int *)content;
	res = malloc(sizeof(int));
	*res = *val * 10;
	//return((void *)((*((int *)content)) * 10));
	return (res);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*res;
	
	lst = ft_lstnew((int *)1);
	ft_lstadd_back(&lst, ft_lstnew((int *)2));
	ft_lstadd_back(&lst, ft_lstnew((int *)3));

	res = ft_lstmap(lst, multiple, del);
	while (res)
	{
		printf("%d\n", *(int *)res->content);
		res = res->next;
	}
	return (0);
}
