/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:03:16 by cbitca            #+#    #+#             */
/*   Updated: 2024/12/03 12:03:18 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// FUNCTION: ft_calloc
// ----------------------------
// The  calloc()  function  allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
// The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
//
// RETURN VALUE
//	The  calloc() functions return a pointer to the allocated memory, which is suitably aligned for any built-in type.
//	On error, these functions return NULL.  
//	NULL may also be returned by a successful call to malloc() with a size of zero, or by a successful call to calloc() with nmemb or size equal to zero.
void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size && n > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	if (ptr)
		ft_bzero(ptr, n * size);
	return (ptr);
}
