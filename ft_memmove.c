/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:17:22 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/29 14:17:23 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	n;

	i = 0;
	while (i != n)
	{
		temp[i] = *(char *)src++;
		i++;
	}
	i = 0;
	while (i != n)
	{
		*(char *)dest++ = temp[i];
		i++;
	}
	return (dest);
}
