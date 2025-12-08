/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:47:19 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 10:47:20 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_strlcat
// ----------------------------
// Appends the string 'src' to the end of 'dest'. At most 'size - 1' characters
// are appended, and the result is null-terminated. Returns the total length
// of the string it tried to create
// (initial length of 'dest' + length of 'src').
//
// RETURN VALUE
//	The length of the string it tried to create.
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	if (!dest || !src)
		return (0);
	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
