/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:13 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 14:51:04 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ndest;
	const unsigned char	*nsrc;
	size_t				i;

	i = 0;
	ndest = dest;
	nsrc = src;
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}
/* 
	The memcpy() copies n bytes from memory area src to
	memory area dest. The memory areas must not overlap.

	RETURN VALUE:
	The memcpy() returns a pointer to dest.
*/

/* int	main(void)
{
	const void	*src = "vem de ca";
	void		*dest[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	printf("ft_memcpy:%s\n", (char *)ft_memcpy(dest, src, 50));
	printf("og_memcpy:%s\n", (char *)memcpy("", "", 50));

	return (0);
} */