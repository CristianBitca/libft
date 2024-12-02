/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:56:08 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/26 21:56:09 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int chr, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		*(char *)str = chr;
		str++;
		i++;
	}
	return(str);
}

