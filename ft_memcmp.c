/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:27:09 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/30 14:27:15 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		if (*(char *)str1++ != *(char *)str2++)
			return (*(char *)str1 - *(char *)str2);
		i++;
	}
	return (0);
}
