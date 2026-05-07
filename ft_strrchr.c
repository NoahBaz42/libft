/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:37 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/07 15:46:28 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			str = ((char *)&s[i]);
		i++;
	}
	return (str);
}
/*
	The strrchr() function returns a pointer to the last occurrence of  the
	character c in the string s.

	The strchr() and strrchr() functions return a pointer  to  the  matched
	character  or NULL if the character is not found.  The terminating null
	byte is considered part of the string, so that if  c  is  specified  as
	'\0', these functions return a pointer to the terminator.
 */
/*  int main(void)
 {
	const char str[] = "panadanada";
	int c = 'd';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));

	return (0);
 } */