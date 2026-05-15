/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:19 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 14:40:22 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*
	strlen() calculates the length of the string pointed
	to by s, excluding the terminating null byte ('\0').
	
	It returns the number of bytes in the string
	pointed to by s.
*/
/* #include <stdio.h>

int	main(void)
{
	const char* str = NULL;
	const char* ptr = "sup";
	
	printf("%zu\n",strlen(ptr));
	printf("%zu\n",ft_strlen(ptr));

	printf("%zu\n",strlen(str));
	printf("%zu\n",ft_strlen(str));
	return(0);
}
 */