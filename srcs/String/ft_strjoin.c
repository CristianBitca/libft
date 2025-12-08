/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:29:29 by cbitca            #+#    #+#             */
/*   Updated: 2025/04/07 14:35:17 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_strjoin
// ----------------------------
// Allocates and returns a new string which is the result of the concatenation
// of 's1' and 's2'.
//
// RETURN VALUE
//	A pointer to the new concatenated string,
//	or NULL if memory allocation fails.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	buffer = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s1, len_s1 + 1);
	ft_strlcat(buffer, s2, len_s1 + len_s2 + 1);
	return (buffer);
}
