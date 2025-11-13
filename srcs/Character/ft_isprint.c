/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:12:11 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 11:12:12 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_isprint
// ----------------------------
// Checks for any printable character including space.
//
// RETURN VALUE
//	The values returned are nonzero if the character c falls into the tested class, and zero if not.
int	ft_isprint(int c)
{
	if (32 <= c && 126 >= c)
		return (1);
	return (0);
}
