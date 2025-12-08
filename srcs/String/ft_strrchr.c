/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:34:12 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/26 20:34:14 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_strrchr
// ----------------------------
// Locates the last occurrence of the character 'chr' in the string 'str'.
//
// RETURN VALUE
//	A pointer to the last occurrence of 'chr' in 'str',
//	or NULL if 'chr' is not found.
char	*ft_strrchr(char *str, char chr)
{
	int		i;
	char	*s;

	if (!str)
		return (NULL);
	i = 0;
	s = NULL;
	while (str[i])
	{
		if (str[i] == chr)
			s = &str[i];
		i++;
	}
	if (str[i] == chr)
		return (&str[i]);
	return (s);
}
