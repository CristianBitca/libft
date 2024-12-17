/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:38:12 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/03 13:38:14 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*buffer;

	if (start >= ft_strlen(s))
		return(strdup(""));
	buffer = ft_calloc(n + 1, sizeof(char));
	if (!buffer)
		return ("");
	if (n == 1)
		ft_strlcpy(buffer, &s[start], n);
	else
		ft_strlcpy(buffer, &s[start], n + 1);
	return (buffer);
}
