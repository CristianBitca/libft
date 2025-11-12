/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:30:27 by cbitca            #+#    #+#             */
/*   Updated: 2025/01/06 15:30:28 by cbitca           ###   ########.fr       */
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

int	pf_putpointer(void *ptr)
{
	int	res;

	res = 0;
	if (!ptr)
		return (pf_putstr("(nil)"));
	res += pf_putstr("0x");
	res += pf_putnbr_hexa(*(unsigned long *)&ptr, 'x');
	return (res);
}

int	format(va_list args, char c)
{
	int	var_return;

	var_return = 0;
	if (c == 'c')
		var_return += pf_putchr(va_arg(args, int));
	else if (c == 's')
		var_return += pf_putstr(va_arg(args, char *));
	else if (c == 'p')
		var_return += pf_putpointer(va_arg(args, void *));
	else if (c == 'i' || c == 'd')
		var_return += pf_putnbr(va_arg(args, int));
	else if (c == 'u')
		var_return += pf_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		var_return += pf_putnbr_hexa(va_arg(args, unsigned int), c);
	else if (c == '%')
		var_return += pf_putchr('%');
	return (var_return);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		var_return;

	va_start(args, str);
	var_return = 0;
	while (*str)
	{
		if (*str == '%')
		{
			var_return += format(args, *++str);
			str++;
		}
		else
		{
			var_return += pf_putchr(*str);
			str++;
		}
	}
	va_end(args);
	return (var_return);
}

/*int	main(void)
{
	unsigned int a = 1000;
	void *p = &a;

	printf("My function\n");
	printf("retunr of printf %d\n", ft_printf("NULL %s NULL", NULL));
	printf("Actual Function \n");
	printf("retunr of printf %d\n", printf("NULL %x NULL", 100));
	return (0);
}*/
