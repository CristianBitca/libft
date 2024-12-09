/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:29:38 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 18:29:40 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return (big);
	while (big[i] || i != len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return (0);
}
