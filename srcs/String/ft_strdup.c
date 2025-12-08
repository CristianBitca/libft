/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:02:35 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/03 13:02:36 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_strdup
// ----------------------------
// Allocates memory and returns a new string which is
// a duplicate of the string 's'.
//
// RETURN VALUE
//	A pointer to the duplicated string, or NULL if memory allocation fails.
char	*ft_strdup(const char *s)
{
	int		l;
	char	*buffer;

	l = ft_strlen(s);
	buffer = ft_calloc(l + 1, sizeof(char));
	if (buffer == NULL)
		return (0);
	ft_strlcpy(buffer, s, l + 1);
	return (buffer);
}
