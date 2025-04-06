/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:30:45 by cbitca            #+#    #+#             */
/*   Updated: 2025/01/06 15:30:46 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchr(int c);
int		ft_putstr(char *str);
int		ft_count_int(int num);
int		ft_putnbr(int n);
int		ft_count_unsignedint(unsigned int num);
int		ft_unsigned(unsigned int n);
int		ft_putnbr_hexa(unsigned long n, char format);
int		ft_putpointer(void *ptr);

char	*ft_itoa(int n);
char	*ft_unsigneditoa(unsigned int n);

void	*ft_calloc(size_t n, size_t size);

#endif
