/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:35:19 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 20:35:21 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_atoi
// ----------------------------
// The atoi() function converts the initial
// portion of the string pointed to by nptr to int.
//
// RETURN VALUE
//	The converted value or 0 on error.
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ' || ('\t' <= nptr[i] && '\r' >= nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while ('0' <= nptr[i] && '9' >= nptr[i])
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
