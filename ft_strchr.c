/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:49 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 01:10:16 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if (*s == (char) c)
		return ((char *)s);
	return (NULL);
}
/* 
	The strchr() function returns a pointer to the **first**
	occurrence of the character c in the string s.
   	The strchr() returns a pointer to the matched character
	or NULL if the character is not found.
	The terminating null byte is considered part of the string,
	so that if c is specified as '\0', these functions
	return a pointer to the terminator.
 */

/*  int main(void)
 {
	const char *str = "panadanada";
	int c = 'd';
	printf("\n%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));

	return (0);
 } */