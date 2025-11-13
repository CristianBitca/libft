/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:51:30 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/26 20:51:31 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_strncmp
// ----------------------------
// Compares at most 'n' characters of the strings 'str1' and 'str2'.
// The comparison is done using unsigned characters.
//
// RETURN VALUE
//	An integer less than, equal to, or greater than zero if 'str1' is found,
//	to be less than, to match, or be greater than 'str2', respectively.
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (!str1 || !str2)
		return (0);
	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
