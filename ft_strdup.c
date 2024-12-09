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

char	*ft_strdup(const char *s)
{
	char	*buffer;

	buffer = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (buffer == NULL)
		return (0);
	ft_strlcpy(buffer, s, ft_strlen(s) + 1);
	return (buffer);
}
