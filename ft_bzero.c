/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:27:42 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 00:27:43 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}

/*
	The  bzero()  function  erases  the  data  in the n bytes of the
	memory starting at the location pointed to by s, by writing zeros
	(bytes  containing '\0') to that area.
	There is no return value.
	... you may need to include <bsd/string.h> and compile with
	the -lbsd flag.
*/

// NOTA: Em vez de 21, usar ft_strlen();

/* int	main(void)
{
	char	str1[10] = "Hello";
	char	str2[10] = "Hello";

	char	str3[10] = "World";
	char	str4[10] = "World";

	printf("Before:\n");
	printf("ft_str1: %s\n", str1);
	printf("bzero str2: %s\n", str2);
	printf("ft_str3: %s\n", str3);
	printf("bzero str4: %s\n", str4);

	// Apply your function
	ft_bzero(str1, sizeof(str1));
	ft_bzero(str3, 3);

	// Apply real bzero
	bzero(str2, sizeof(str2));
	bzero(str4, 3);

	printf("\nAfter:\n");
	printf("ft_str1: %s\n", str1);
	printf("bzero str2: %s\n", str2);

	printf("ft_str3: %s\n", str3);
	printf("bzero str4: %s\n", str4);

	return (0);
} */

/* int	main(void)
{
	char	str1[10] = "Hello";
	char	str2[10] = "Hello";

	char	str3[10] = "World";
	char	str4[10] = "World";

	printf("Before:\n");
	printf("ft_str1: %s\n", str1);
	printf("bzero str2: %s\n", str2);
	printf("ft_str3: %s\n", str3);
	printf("bzero str4: %s\n", str4);

	// Apply your function
	ft_bzero(str1, sizeof(str1));
	ft_bzero(str3, 3);

	// Apply real bzero
	bzero(str2, sizeof(str2));
	bzero(str4, 3);

	printf("\nAfter:\n");
	printf("ft_str1: %s\n", str1);
	printf("bzero str2: %s\n", str2);

	printf("ft_str3: %s\n", str3);
	printf("bzero str4: %s\n", str4);

	return (0);
} */