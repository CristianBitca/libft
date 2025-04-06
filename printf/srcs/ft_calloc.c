/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:03:16 by cbitca            #+#    #+#             */
/*   Updated: 2025/01/06 15:29:11 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
