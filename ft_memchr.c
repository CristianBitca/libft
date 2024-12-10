/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:38:01 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/29 14:38:02 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *str, int chr, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		if (*(char *)str == chr)
			return ((void *)str);
		str++;
		i++;
	}
	return (0);
}
