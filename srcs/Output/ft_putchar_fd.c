/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:18:28 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/08 17:18:29 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_putchar_fd
// ----------------------------
// Writes the character 'c' to the given file descriptor 'fd'.
//
// RETURN VALUE
//	The function does not return a value.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
