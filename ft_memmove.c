/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:18 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 15:11:46 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ndest;
	unsigned char	*nsrc;
	size_t			i;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	while (i < n)
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
/* 
int	main(void)
{
	const void	*src = "vem de ca";
	void		*dest[10];

	printf("%s\n", (char *)ft_memmove(dest, src, 7));
	printf("%s\n", (char *)memmove(dest, src, 7));

	return (0);
}  */