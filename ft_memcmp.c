/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:07 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/09 14:59:01 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

/* 
	The memcmp() function compares the first n bytes 
	(each interpreted as unsigned char) of the
	memory areas s1 and s2.

	The memcmp() function returns an integer less than,
	equal to, or greater than zero if the first n bytes
	of s1 is found, respectively,to be less than, to match,
	or be greater than the first n bytes of s2.

	For a nonzero return value, the sign is determined by
	the sign of the difference between the first pair of
	bytes (interpreted as unsigned char)that differ in s1 and s2.

	If n is zero, the return value is zero.
 */
/* int main(void)
{
 	const void *s1 = "opaab";
 	const void *s2 = "opaaa";
 	printf("%d\n", ft_memcmp(s1, s2, 5));
 	printf("%d\n", memcmp(s1, s2, 5));
 	return (0);
} */