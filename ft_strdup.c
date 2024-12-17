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

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*buffer;
	int	l;

	l = ft_strlen(s);
	buffer = ft_calloc(l + 1, sizeof(char));
	if (buffer == NULL)
		return (0);
	ft_strlcpy(buffer, s, l + 1);
	return (buffer);
}
