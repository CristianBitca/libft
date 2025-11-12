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

// Copies 'n' bytes from memory area 'src' to memory area 'dest'. The memory areas
// may overlap; copying is performed in a safe manner to avoid data corruption.
//
// RETURN VALUE
//	A pointer to the destination memory area 'dest'.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t_dest;
	unsigned char	*t_src;

	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (t_dest > t_src)
	{
		t_dest += n - 1;
		t_src += n - 1;
		while (n)
		{
			*t_dest-- = *t_src--;
			n--;
		}
	}
	else
		while (n--)
			*t_dest++ = *t_src++;
	return (dest);
}
