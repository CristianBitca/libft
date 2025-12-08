/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:37:59 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/11 18:38:02 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_putnbr_fd
// ----------------------------
// Writes the integer 'n' to the given file descriptor
// 'fd' as a string of digits.
// Handles negative numbers by printing a leading '-'.
//
// RETURN VALUE
//	The function does not return a value.
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n <= -10)
			ft_putnbr_fd((n / 10) * -1, fd);
		ft_putchar_fd(((n % 10) * -1) + '0', fd);
	}
	if (n >= 0)
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
