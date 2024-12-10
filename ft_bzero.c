/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:14:00 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/28 14:14:01 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		*(char *)str++ = '\0';
		i++;
	}
}
