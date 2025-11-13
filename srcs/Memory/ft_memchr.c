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

#include "libft.h"

//
// FUNCTION: ft_memchr
// ----------------------------
// Scans the first 'n' bytes of the memory area pointed to by 's' for the
// character 'c'. Comparison is done using unsigned characters.
//
// RETURN VALUE
//	A pointer to the first occurrence of 'c' in the memory area, or NULL if
//	'c' is not found in the first 'n' bytes.
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		if (*(char *)s == (char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
