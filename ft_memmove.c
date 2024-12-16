/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:17:22 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/29 14:17:23 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*t_dest;
	unsigned char	*t_src;

	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	if (!t_dest && !t_src)
		return (NULL);
	if (t_dest > t_src)
	{
		while (n)
		{
			t_dest[n] = t_src[n];
			n--;
		}
	}
	else
		ft_memcpy(t_dest, t_src, n);
	return (dest);
}
