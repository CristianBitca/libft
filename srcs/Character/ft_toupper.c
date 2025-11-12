/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:12:37 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 11:12:38 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts a lowercase letter to its uppercase equivalent.
// If 'c' is not a lowercase letter, it is returned unchanged.
//
// RETURN VALUE
//	The uppercase equivalent of 'c' if it is lowercase, otherwise 'c' itself.
int	ft_toupper(int c)
{
	if ('a' <= c && 'z' >= c)
		return (c - 32);
	return (c);
}
