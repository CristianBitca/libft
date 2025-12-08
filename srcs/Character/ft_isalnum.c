/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:11:30 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 11:11:31 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_isalnum
// ----------------------------
// Checks for an alphanumeric character,
// it is equivalent to (isalpha(c) || isdigit(c)).
//
// RETURN VALUE
//	The values returned are nonzero if the 
// 	character c falls into the tested class, and zero if not.
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
