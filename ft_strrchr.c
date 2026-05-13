/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:37 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 17:41:47 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = NULL;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			str = ((char *)&s[i]);
		i--;
	}
	return (str);
}
/*
	The strrchr() function returns a pointer to the **last**
	occurrence of the character c in the string s.

	The strrchr() function returns a pointer to the matched character
	or NULL if the character is not found. The terminating null byte
	is considered part of the string, so that if c is specified as
	'\0', these functions return a pointer to the terminator.
 */
/*  int main(void)
 {
	const char str[] = "panadanada";
	int c = '\0';

	char *out_a;
	char *out_b;

	out_a = ft_strrchr(str, c);
	out_b = strrchr(str, c);
	printf("[%p] %s\n", (void *)out_a, out_a);
	printf("[%p] %s\n", (void *)out_b, out_b);

	return (0);
 } */