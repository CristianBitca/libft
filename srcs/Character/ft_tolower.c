/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:12:27 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 11:12:28 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_tolower
// ----------------------------
// Converts an uppercase letter to its lowercase equivalent.
// If 'c' is not an uppercase letter, it is returned unchanged.
//
// RETURN VALUE
//	The lowercase equivalent of 'c' if it is uppercase, otherwise 'c' itself.
int	ft_tolower(int c)
{
	if ('A' <= c && 'Z' >= c)
		return (c + 32);
	return (c);
}
