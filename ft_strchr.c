/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:49 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/16 19:15:02 by noah-baz         ###   ########.fr       */
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
	occurrence of the character c in the string s. It returns
	a pointer to the matched character or NULL if the
	character is not found.
	
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