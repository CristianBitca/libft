/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:59 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/06 14:38:03 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates and returns a copy of 's1' with characters specified in 'set'
// removed from the beginning and the end of the string.
//
// RETURN VALUE
//	A pointer to the trimmed string, or NULL if memory allocation fails
//	or if 's1' is NULL. If 'set' is NULL, returns a duplicate of 's1'.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	buffer = 0;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (ft_strchr(set, s1[i]))
			i++;
		while (ft_strchr(set, s1[j - 1]))
			j--;
		buffer = ft_substr(s1, i, j - i);
	}
	return (buffer);
}
