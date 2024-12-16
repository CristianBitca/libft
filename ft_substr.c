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
#include "ft_calloc.c"
#include "ft_strlcpy.c"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*buffer;

	buffer = ft_calloc(n + 1, sizeof(char));
	ft_strlcpy(buffer, &s[start], n);
	return (buffer);
}

int main(void)
{
	ft_substr("lorem ispu", 0, 10);
	return (0);
}