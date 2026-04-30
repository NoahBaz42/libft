/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:37 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:50:31 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ndest;
	unsigned char	*nsrc;
	int				i;

	i = 0;
	ndest = dest;
	nsrc = src;
	while (ndest[i] < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}
/* 
	The  memcpy()  function  copies  n bytes from memory area src to memory
	area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
	memory areas do overlap.

	RETURN VALUE
	The memcpy() function returns a pointer to dest.
*/