/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:18 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 14:57:58 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ndest;
	const unsigned char	*nsrc;

	ndest = dest;
	nsrc = src;
	if (ndest > nsrc)
	{
		while (n--)
		{
			ndest[n] = nsrc[n];
		}
	}
	if (ndest < nsrc)
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
	The memmove() copies n bytes from memory area src
	to memory area dest. The memory areas may overlap:
	copying takes place as though the bytes in src are
	first copied into a >temporary array< that does not
	overlap src or dest, and the bytes are then copied
	from the temporary array to dest.
	
	If the destination address is +greater+ than the source
	address, it performs a forward copy. This means it
	starts copying from the end of the source to the
	beginning of the destination.
	This prevents overwriting data that has yet to be copied.
	
	If the destination address is -less- than the source
	address, it performs a backward copy. This means it
	starts copying from the beginning of the source to the
	end of the destination.
	This ensures that the original data remains intact,
	even as it’s being copied over.

	RETURN VALUE
	The memmove() function returns a pointer to dest.
*/

/* int	main(void)
{
	const void	*src = "vem de ca";
	void		*dest[10];

	printf("%s\n", (char *)ft_memmove(dest, src, 7));
	printf("%s\n", (char *)memmove(dest, src, 7));

	return (0);
}  */