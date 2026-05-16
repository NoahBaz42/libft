/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:13 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/16 18:53:27 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* 
	Strlcpy() function copy the string src to dst.
	It takes the full size of the buffer(not just the length)
	and guarantee to NUL-terminate the result(as long as
	size is larger than 0).
	
	Note that a byte for the NULL should be included in size.
	
	Strlcpy() copies up to size - 1 characters from the
	NUL-terminated string src to dst,NUL-terminating the result.
	
	RETURN VALUES
	The strlcpy() returns the total length of the string
	they tried to create, that means the length of src.
*/
/* #include <bsd/string.h>

 int main(void)
 {
	char dst[6];
	char dst1[6];
	ft_strlcpy(dst, "lorem ipsum", 3);
	//ft_strlcpy(dst, "hello", sizeof(dst));
	strlcpy(dst1, "hello", sizeof(dst1));
	printf("\nft_strlcpy's new string:%s\n", dst);
	printf("strlcpy's new string:%s\n\n", dst1);

	return (0);

 } */