/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:09 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/11 16:20:34 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (dst_len >= size)
		return (src_len + size);
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

/*
	The strlcat() function concatenate strings. They are designed to
	be safer, more consistent, and less error prone replacements for
	strncat(3).it takes the full size of the buffer (not just the
	length) and guarantee to NUL-terminate the result (as long as 
	there is at least one byte free in dst). Note that a byte for
	the NULL should be included in size.For strlcat() both src and
	dst must be NUL-terminated.
	The	strlcat(void) function appends the NUL-terminated string src
	to the end of dst. It will append at most size - strlen(dst) - 1
	bytes, NUL-terminating the result.

	RETURN VALUES
	The strlcat() function returns the total length of the string
	it tried to create.That means the initial length of dst plus the length of
	src.  While this may seem somewhat confusing,
	it was done to make truncation detection simple.
*/
/* #include <bsd/string.h>

 int main(void)
 {
	char dst[8] = "ali";
	char dst1[8] = "ali";

	printf("\nft_strlcat's return:%zu\n\n",ft_strlcat(dst, "baba", 8));
	printf("ft_strlcat's new string:%s\n\n", dst);
	printf("strlcat's   return:%zu\n\n",strlcat(dst1, "baba", 8));
	printf("strlcat's   new  string:%s\n\n", dst1);
	return (0);
 } */