/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:30:12 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/29 13:30:13 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		*(char *)dest++ = *(char *)src++;
		i++;
	}
	return (dest);
}
