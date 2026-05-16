/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:52 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/16 19:21:49 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*  
	The  strdup() function returns a pointer to a new string which
	is a duplicate of the string s.  Memory for the new string
	is obtained with malloc(3), and can be freed with free(3).

	strdup() returns a pointer to the duplicated string.
	It returns NULL if insufficient memory was available,
	with errno set to indicate the cause of the error.
*/

/* int	main(void)
{
	const char	*str = "WHAT IF...123456789'/0'/0'/0'/0'!@#$%^&*()MUAHAaHAh";
	char * str1;
	char * str2;
	str1 = ft_strdup(str);
	str2 = strdup(str);
	printf("\nft_strdup:\nSource string:%s\nNew string:%s\n", str, str1);
	printf("\nstrdup:\nSource string:%s\nNew string:%s\n", str, str2);

	free(str1);
	free(str2);
	return (0);
} */