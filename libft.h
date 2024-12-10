/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:22:02 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/02 13:22:04 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str);
int	ft_strncmp(const char *str1, const char *str2, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);

void	*ft_calloc(size_t n, size_t size);
void	ft_putchar_fd(char c, int fd);

char	*ft_substr(char const *s, unsigned int start, size_t n);
char	*ft_strdup(const char *s);

#endif
