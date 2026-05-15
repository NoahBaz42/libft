/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:24 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 14:48:15 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
	The memset() function fills the >first< n bytes of the
	memory area pointed to by s with the constant byte c.
	
	It returns a pointer to the memory area s.
*/
/* int main(void)
{
	char str[6];
	char ptr[6];

	memset((void*)str, 56, 5);
	printf("og_memset:%s\n", str);
	
	ft_memset((void*)ptr, 56, 5);
	printf("ft_memset:%s\n", ptr);

	return(0);
}
 */
