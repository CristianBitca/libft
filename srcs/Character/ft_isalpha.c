/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:15:53 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/26 14:15:55 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Checks whether a character is alphabetic or any printable character, including space.
//
// RETURN VALUE
//	The values returned are nonzero if the character c falls into the tested class, and zero if not.
int	ft_isalpha(int c)
{
	if (('a' <= c && 'z' >= c)
		|| ('A' <= c && 'Z' >= c))
		return (1);
	return (0);
}
