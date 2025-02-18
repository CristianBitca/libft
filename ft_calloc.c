/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:03:16 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/03 12:03:18 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	while (i < n * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
