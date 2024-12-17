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
#include "ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*buffer;

	buffer = ft_calloc(n + 2, sizeof(char));
	if (!buffer || ft_strlen(s) < start)
		return ("");
	if (n == 1)
		ft_strlcpy(buffer, &s[start], n);
	else
		ft_strlcpy(buffer, &s[start], n + 1);
	return (buffer);
}

int	main(void)
{
	ft_substr("hola", 4294967295, 0);
	return (0);
}