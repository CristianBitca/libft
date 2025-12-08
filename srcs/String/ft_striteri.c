/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:19:50 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/11 19:19:52 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_striteri
// ----------------------------
// Applies the function 'f' to each character of the string 's', passing the
// index of the character as the first argument.
// The function can modify the string in place.
//
// RETURN VALUE
//	The function does not return a value.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
