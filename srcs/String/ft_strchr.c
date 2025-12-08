/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:23:28 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/26 20:23:29 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_strchr
// ----------------------------
// Locates the first occurrence of the character 'c' in the string 's'.
// The terminating null byte is considered part of the string.
//
// RETURN VALUE
//	A pointer to the first occurrence of 'c' in 's',
//	or NULL if 'c' is not found.
char	*ft_strchr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
