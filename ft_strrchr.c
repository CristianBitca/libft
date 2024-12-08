/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:34:12 by cbitca            #+#    #+#             */
/*   Updated: 2024/11/26 20:34:14 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, char chr)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i])
	{
		if (str[i] == chr)
			s = &str[i];
		i++;
	}
	return (s);
}
