/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:29 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/09 15:19:51 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
	The  strcmp()  function compares the two strings s1 and s2.
	The comparison is done using unsigned characters.
	strcmp() returns an integer indicating the result
	of the comparison, as follows:

	• 0, if the s1 and s2 are equal;
	• a negative value if s1 is less than s2;
	• a positive value if s1 is greater than s2.
	
	The strncmp() function is similar, except it compares  only  the  first
	(at most) n bytes of s1 and s2.

	The strncmp() functions return an integer less than, equal
	to, or greater than zero if s1 (or the first n bytes thereof) is found,
	respectively, to be less than, to match, or be greater than s2.
*/

/* int main(void)
{
 	const char *str1 = "opab";
 	const char *str2 = "opaa";

 	printf("%d\n", ft_strncmp(str1, str2, 4));
 	printf("%d\n", strncmp(str1, str2, 4));
 	return (0);
} */