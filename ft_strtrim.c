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

int	find_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (find_set(set, s1[i]))
		i++;
	while (find_set(set, s1[j]))
		j--;
	buffer = ft_substr(s1, i, j);
	return (buffer);
}
