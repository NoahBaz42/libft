/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:37 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/16 19:16:12 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			i;

	str = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			str = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return ((char *)str);
}
/*
	The strrchr() function returns a pointer to the **last**
	occurrence of the character c in the string s. It returns
	a pointer to the matched character or NULL if the
	character is not found.
	
	The terminating null byte is considered part of the string,
	so that if c is specified as '\0', these functions return
	a pointer to the terminator.
 */
/*  int main(void)
 {
	const char str[] = "panadanada";
	int c = 'n';

	char *out_a;
	char *out_b;

	out_a = ft_strrchr(str, c);
	out_b = strrchr(str, c);
	printf("[%p] %s\n", out_a, out_a);
	printf("[%p] %s\n", out_b, out_b);

	return (0);
 } */