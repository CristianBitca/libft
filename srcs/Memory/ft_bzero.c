/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:14:00 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/28 14:14:01 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s,
// by writing zeros (bytes containing '\0') to that area.
//
// RETURN VALUE
//	The function does not return a value.
void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		*(char *)s++ = '\0';
		i++;
	}
}
