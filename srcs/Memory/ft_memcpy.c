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

//
// FUNCTION: ft_memcpy
// ----------------------------
// Copies 'n' bytes from memory area 'src' to memory area 'dest'.
// The memory areas must not overlap.
//
// RETURN VALUE
//	A pointer to the destination memory area 'dest'.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*t_dest;
	unsigned char	*t_src;

	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	while (n)
	{
		*(t_dest++) = *(t_src++);
		n--;
	}
	return (dest);
}
