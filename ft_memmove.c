/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:40 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:50:46 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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
	The  memmove()  function  copies n bytes from memory area src to memory
	area dest.  The memory areas may overlap: copying takes place as though
	the  bytes in src are first copied into a temporary array that does not
	overlap src or dest, and the bytes are then copied from  the  temporary
	array to dest.

	RETURN VALUE
	The memmove() function returns a pointer to dest.
*/