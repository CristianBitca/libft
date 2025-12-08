/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:27:09 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/30 14:27:15 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_memcmp
// ----------------------------
// Compares the first 'n' bytes of the memory areas 's1' and 's2'.
// Each byte is interpreted as an unsigned char.
//
// RETURN VALUE
//	An integer less than, equal to, or greater than zero
//	if the first 'n' bytes of 's1' are found, respectively,
//	to be less than, to match, or be greater than
//	the first 'n' bytes of 's2'.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
