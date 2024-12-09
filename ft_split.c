/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:43:10 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/08 18:43:13 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
		if (s[i] == c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		a;
	int		count;

	i = 0;
	j = 0;
	a = 0;
	count = count_words(s, c);
	array = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	while (s[i] && count != 0)
	{
		while (s[i++] == c)
			i++;
		if (s[i] != c)
			j = i;
		while (s[i] != c && s[i])
			i++;
		array[a++] = ft_substr(s, j, i - j);
		while (s[i] == c)
			i++;
	}
	array[a] = NULL;
	return (array);
}
