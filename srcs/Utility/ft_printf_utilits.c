/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:52:51 by cbitca            #+#    #+#             */
/*   Updated: 2025/12/08 17:52:52 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pf_putchr(int c)
{
	write (1, &c, 1);
	return (1);
}

int	pf_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (pf_putstr("(null)"));
	while (*str)
	{
		pf_putchr(*str++);
		i++;
	}
	return (i);
}

int	pf_putnbr(int n)
{
	char	*num;
	int		res;

	num = ft_itoa(n);
	res = pf_putstr(num);
	free(num);
	return (res);
}

int	pf_unsigned(unsigned int n)
{
	char	*num;
	int		res;

	num = ft_utoa(n);
	res = pf_putstr(num);
	return (res);
}

int	pf_putnbr_hexa(unsigned long n, char format)
{
	char	*base;
	int		res;

	res = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
		res += pf_putnbr_hexa(n / 16, format);
	res += pf_putchr(base[n % 16]);
	return (res);
}
